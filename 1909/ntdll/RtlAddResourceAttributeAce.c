/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800E7330
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopySid @ 0x180014AC0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180014B00 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014E00 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7930 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800E8600 (RtlpValidAttributeInfo.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  _BYTE *v9; // rdi
  int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  __int64 Heap; // rax
  size_t v15; // r13
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  int v18; // ecx
  unsigned int v19; // r9d
  unsigned __int8 *i; // r8
  __int64 v21; // r15
  int v22; // r8d
  char v23; // al
  unsigned int Size; // [rsp+28h] [rbp-E0h] BYREF
  int Size_4; // [rsp+2Ch] [rbp-DCh]
  __int64 v27; // [rsp+30h] [rbp-D8h]
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v30; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v28 = 0LL;
  v29 = 0;
  v9 = 0LL;
  v30 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  if ( !RtlValidSid((_BYTE *)a5) )
    return (unsigned int)-1073741704;
  v12 = *(_DWORD *)(a5 + 2) - v29;
  if ( !v12 )
    v12 = *(unsigned __int16 *)(a5 + 6) - v30;
  if ( v12 )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a5 + 1) == 1 && !*(_DWORD *)(a5 + 8) )
  {
    if ( *a1 > 4u || a2 > 4 )
      return (unsigned int)-1073741735;
    v13 = *a1;
    if ( *a1 <= (unsigned __int8)a2 )
      v13 = (unsigned __int8)a2;
    LODWORD(v27) = v13;
    if ( (Size_4 & 0xFFFFFFE0) == 0 && !a4 && (unsigned __int8)RtlpValidAttributeInfo(a6) && *(_DWORD *)(a6 + 4) == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &Size);
      if ( v11 == -1073741789 )
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
        v9 = (_BYTE *)Heap;
        if ( !Heap )
          return (unsigned int)-1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Heap, &Size);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v28) )
        {
          v15 = Size;
          if ( Size > 0xFFFF
            || (v16 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4), v17 = v16 + Size, (unsigned __int16)(v16 + Size) < v16) )
          {
            v11 = -1073741675;
          }
          else
          {
            v18 = 8;
            v19 = 0;
            *a7 = 8;
            for ( i = a1 + 8; v19 < *((unsigned __int16 *)a1 + 2); i += *((unsigned __int16 *)i + 1) )
            {
              ++v19;
              v18 = *a7 + *((unsigned __int16 *)i + 1);
              *a7 = v18;
            }
            v21 = v28;
            v22 = v18 + v17;
            *a7 = v22;
            if ( v21 && v21 + (unsigned __int64)v17 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
            {
              v23 = Size_4;
              *(_WORD *)(v21 + 2) = v17;
              *(_BYTE *)(v21 + 1) = v23;
              *(_BYTE *)v21 = 18;
              *(_DWORD *)(v21 + 4) = 0;
              RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v21 + 8), (unsigned __int8 *)a5);
              memmove((void *)(v21 + 4 * (*(unsigned __int8 *)(a5 + 1) + 4LL)), v9, v15);
              ++*((_WORD *)a1 + 2);
              *a1 = v27;
            }
            else
            {
              v11 = -1073741671;
              *a7 = (v22 + 3) & 0xFFFFFFFC;
            }
          }
        }
        else
        {
          v11 = -1073741705;
        }
      }
      goto LABEL_39;
    }
    return (unsigned int)-1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
  return (unsigned int)v11;
}
