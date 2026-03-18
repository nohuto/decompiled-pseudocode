/*
 * XREFs of ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C00921F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::Initialize(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        void **Src)
{
  char v6; // r15
  char v7; // r12
  __int64 v8; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // rcx
  __int64 result; // rax

  v6 = a3;
  v7 = a2;
  v8 = a4;
  if ( *((_DWORD *)this + 11) )
    return 3221225473LL;
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  *((_QWORD *)this + 1) = Win32AllocPoolNonPaged(8 * v8, 0x79737355u);
  *((_QWORD *)this + 3) = Win32AllocPoolNonPaged(48 * v8, 0x774B7355u);
  v10 = (unsigned int)v8 - a5;
  *((_DWORD *)this + 12) = 1;
  if ( (unsigned int)v8 > a5 )
  {
    v11 = Win32AllocPool(16LL * (unsigned int)v10, 0x70694843u);
    *((_QWORD *)this + 4) = v11;
    if ( !v11 )
      return 3221225495LL;
  }
  if ( !*((_QWORD *)this + 3) )
    return 3221225495LL;
  v12 = (void *)*((_QWORD *)this + 1);
  if ( !v12 )
    return 3221225495LL;
  memset(v12, 0, 8 * v8);
  memset(*((void **)this + 4), 0, 16 * v10);
  memmove(*((void **)this + 1), Src, 8LL * a5);
  result = 0LL;
  *((_DWORD *)this + 11) = v8;
  *((_DWORD *)this + 13) = a5;
  *((_BYTE *)this + 56) = v7;
  *((_BYTE *)this + 57) = v6;
  return result;
}
