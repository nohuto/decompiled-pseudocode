/*
 * XREFs of ProbeAndCaptureSoftKbdData @ 0x1C01CFE7C
 * Callers:
 *     NtUserfnIMECONTROL @ 0x1C021F5A0 (NtUserfnIMECONTROL.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

_DWORD *__fastcall ProbeAndCaptureSoftKbdData(char *Src)
{
  unsigned int *v2; // rax
  int v3; // r14d
  SIZE_T v4; // rbx
  __int64 v5; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx

  v2 = (unsigned int *)Src;
  if ( (unsigned __int64)Src >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  v4 = (unsigned __int64)*v2 << 9;
  ProbeForRead(Src + 4, v4, 2u);
  v5 = 0xFFFFFFFFLL;
  if ( v4 > 0xFFFFFFFF )
    return 0LL;
  v7 = v4 + 4;
  if ( (int)v4 + 4 >= (unsigned int)v4 )
    v5 = v7;
  if ( v7 < (unsigned int)v4 )
    return 0LL;
  v8 = v5;
  v9 = (_DWORD *)Win32AllocPool(v5, 1835627349LL);
  v10 = v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  memmove(v9, Src, v8);
  *v10 = v3;
  return v10;
}
