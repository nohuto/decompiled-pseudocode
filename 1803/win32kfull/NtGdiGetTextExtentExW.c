/*
 * XREFs of NtGdiGetTextExtentExW @ 0x1C0083FC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreGetTextExtentExW @ 0x1C013CF34 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        char *Src,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        char *a6,
        ULONG64 a7,
        int a8)
{
  __int64 v8; // rsi
  HDC v10; // r10
  unsigned int v11; // r13d
  unsigned __int16 *v12; // rdx
  _BYTE *v13; // r14
  int v14; // r12d
  unsigned int TextExtent; // ebx
  unsigned __int16 *v16; // r9
  char *v17; // rax
  _DWORD *v18; // r15
  int *v19; // rcx
  _QWORD *v20; // rax
  size_t v21; // r8
  __int64 v23; // [rsp+44h] [rbp-104h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-F8h]
  unsigned int v25; // [rsp+58h] [rbp-F0h]
  unsigned __int16 *v26; // [rsp+60h] [rbp-E8h]
  __int64 v27; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int16 *v28; // [rsp+70h] [rbp-D8h]
  ULONG64 v29; // [rsp+78h] [rbp-D0h]
  HDC v30; // [rsp+80h] [rbp-C8h]
  char *v31; // [rsp+88h] [rbp-C0h]
  HDC v32; // [rsp+90h] [rbp-B8h]
  _BYTE v33[64]; // [rsp+A0h] [rbp-A8h] BYREF
  _BYTE v34[32]; // [rsp+E0h] [rbp-68h] BYREF

  v8 = a3;
  v10 = a1;
  v30 = a1;
  v32 = a1;
  v25 = a3;
  v31 = a6;
  v29 = a7;
  v11 = 0;
  v23 = 0LL;
  v12 = 0LL;
  v26 = 0LL;
  v13 = 0LL;
  v24 = 0LL;
  v14 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( a3 )
  {
    LOBYTE(v14) = a3 <= 0x10;
    HIDWORD(v23) = v14;
    if ( Src )
    {
      if ( a3 > 0x10 )
      {
        if ( a3 <= 0x682AAA )
        {
          v13 = (_BYTE *)AllocFreeTmpBuffer(6 * a3);
          v24 = v13;
        }
        v16 = (unsigned __int16 *)&v13[4 * v8];
        v26 = v16;
      }
      else
      {
        v16 = (unsigned __int16 *)v34;
        v26 = (unsigned __int16 *)v34;
        v13 = v33;
        v24 = v33;
      }
      v28 = v16;
      if ( v13 )
      {
        v17 = &Src[2 * v8];
        if ( v17 < Src || (unsigned __int64)v17 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, Src, 2 * v8);
        TextExtent = 1;
      }
      v12 = v28;
      v10 = v30;
    }
    v18 = a5;
    if ( TextExtent )
    {
      v19 = 0LL;
      if ( a6 )
        v19 = (int *)v13;
      TextExtent = GreGetTextExtentExW(v10, v12, v8, (__int64)&v23, v19, (__int64)&v27, a8);
      v11 = v23;
    }
    HIDWORD(v23) = v14;
    if ( !TextExtent )
      goto LABEL_35;
  }
  else
  {
    LODWORD(v23) = 0;
    v27 = 0LL;
    TextExtent = 1;
    v18 = a5;
  }
  if ( v11 > (unsigned int)v8 )
  {
    TextExtent = 0;
  }
  else
  {
    v20 = (_QWORD *)v29;
    if ( v29 >= MmUserProbeAddress )
      v20 = (_QWORD *)MmUserProbeAddress;
    *v20 = v27;
    if ( v18 )
    {
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = v11;
    }
    if ( v11 && a6 && v13 )
    {
      v21 = 4LL * v11;
      if ( (unsigned __int64)&a6[v21] > MmUserProbeAddress || &a6[v21] <= a6 || ((unsigned __int8)a6 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a6, v13, v21);
    }
  }
LABEL_35:
  if ( !v14 && v13 )
    FreeTmpBuffer(v13);
  return TextExtent;
}
