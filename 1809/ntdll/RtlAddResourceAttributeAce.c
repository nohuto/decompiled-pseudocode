/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800E9F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlCopySid @ 0x180040D90 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180040DD0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180040E30 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800411A0 (RtlValidSid.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlUShortAdd @ 0x1800E7E34 (RtlUShortAdd.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800EA590 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800EB4F4 (RtlpValidAttributeInfo.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  int v15; // ecx
  __int64 Heap; // rax
  size_t v17; // r13
  unsigned __int16 v18; // cx
  unsigned int v19; // r9d
  int v20; // ecx
  unsigned int v21; // r8d
  unsigned __int8 *v22; // rdx
  unsigned __int16 v23; // r8
  __int64 v24; // r15
  int v25; // edx
  char v26; // al
  int v28; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  int Size_4; // [rsp+30h] [rbp-D8h]
  int v31; // [rsp+34h] [rbp-D4h]
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  int v33; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v34; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v32 = 0LL;
  v33 = 0;
  v9 = 0LL;
  v34 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  if ( !RtlValidSid((_BYTE *)a5) )
    return (unsigned int)-1073741704;
  v14 = *(_DWORD *)(a5 + 2) - v33;
  if ( !v14 )
    v14 = *(unsigned __int16 *)(a5 + 6) - v34;
  if ( v14 )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a5 + 1) == 1 && !*(_DWORD *)(a5 + 8) )
  {
    if ( *a1 > 4u || a2 > 4 )
      return (unsigned int)-1073741735;
    v15 = *a1;
    if ( *a1 <= (unsigned __int8)a2 )
      v15 = (unsigned __int8)a2;
    v31 = v15;
    if ( (Size_4 & 0xFFFFFFE0) == 0
      && !a4
      && (unsigned __int8)RtlpValidAttributeInfo(a6, v12, v13, 0LL)
      && *(_DWORD *)(a6 + 4) == 1 )
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
        if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v32) )
        {
          v17 = Size;
          v18 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
          LOWORD(v28) = v18;
          if ( Size > 0xFFFF || (int)RtlUShortAdd(v18, Size, (__int16 *)&v28) < 0 )
          {
            v11 = -1073741675;
          }
          else
          {
            v20 = v19 + 8;
            v21 = v19;
            *a7 = v19 + 8;
            v22 = a1 + 8;
            if ( (unsigned __int16)v19 < *((_WORD *)a1 + 2) )
            {
              do
              {
                ++v21;
                v20 = *a7 + *((unsigned __int16 *)v22 + 1);
                *a7 = v20;
                v22 += *((unsigned __int16 *)v22 + 1);
              }
              while ( v21 < *((unsigned __int16 *)a1 + 2) );
            }
            v23 = v28;
            v24 = v32;
            v25 = v20 + (unsigned __int16)v28;
            *a7 = v25;
            if ( v24 && v24 + (unsigned __int64)v23 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
            {
              v26 = Size_4;
              *(_WORD *)(v24 + 2) = v23;
              *(_BYTE *)(v24 + 1) = v26;
              *(_BYTE *)v24 = 18;
              *(_DWORD *)(v24 + 4) = v19;
              RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v24 + 8), (unsigned __int8 *)a5);
              memmove((void *)(v24 + 4 * (*(unsigned __int8 *)(a5 + 1) + 4LL)), v9, v17);
              ++*((_WORD *)a1 + 2);
              *a1 = v31;
            }
            else
            {
              v11 = -1073741671;
              *a7 = (v25 + 3) & 0xFFFFFFFC;
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
  return (unsigned int)v11;
}
