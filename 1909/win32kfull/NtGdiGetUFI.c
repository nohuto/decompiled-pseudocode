/*
 * XREFs of NtGdiGetUFI @ 0x1C0092CD0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetUFI @ 0x1C0092E18 (GreGetUFI.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtGdiGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, unsigned __int64 a5, ULONG64 a6)
{
  unsigned int UFI; // ebx
  _DWORD *v11; // rcx
  _DWORD **v12; // rsi
  char v13; // al
  int v14; // r14d
  size_t v15; // r8
  ULONG64 v16; // rax
  _DWORD *v17; // rcx
  int v19; // [rsp+40h] [rbp-A8h] BYREF
  int v20; // [rsp+44h] [rbp-A4h] BYREF
  size_t Size; // [rsp+48h] [rbp-A0h]
  __int64 v22; // [rsp+50h] [rbp-98h]
  _BYTE Src[80]; // [rsp+60h] [rbp-88h] BYREF

  v22 = 0LL;
  memset(Src, 0, 0x48uLL);
  v19 = 0;
  UFI = GreGetUFI(a1, (__int64)&v19, (__int64)&v20, 0LL);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v22;
    v11 = (_DWORD *)a6;
    v12 = (_DWORD **)MmUserProbeAddress;
    if ( a6 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    v13 = v20;
    *v11 = v20;
    if ( (v13 & 2) != 0 && a3 )
    {
      v14 = Size;
      v15 = (unsigned int)Size;
      v16 = (ULONG64)a3 + (unsigned int)Size;
      if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v12 = (_DWORD **)MmUserProbeAddress;
      }
      memmove(a3, Src, v15);
      if ( a4 >= *v12 )
        a4 = *v12;
      *a4 = v14;
      v17 = (_DWORD *)a5;
      if ( a5 >= (unsigned __int64)*v12 )
        v17 = *v12;
      *v17 = v19;
    }
  }
  return UFI;
}
