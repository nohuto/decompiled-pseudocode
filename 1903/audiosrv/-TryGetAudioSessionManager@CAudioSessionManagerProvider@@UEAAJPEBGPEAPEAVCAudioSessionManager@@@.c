/*
 * XREFs of ?TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800D9530
 * Callers:
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BFD68 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManagerProvider::TryGetAudioSessionManager(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  volatile signed __int32 **v6; // r14
  volatile signed __int32 **i; // rbx
  volatile signed __int32 *v8; // rax

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v6 = (volatile signed __int32 **)*((_QWORD *)this + 8);
  for ( i = (volatile signed __int32 **)*((_QWORD *)this + 7);
        i != v6 && CompareStringW(0x7Fu, 1u, a2, -1, *((PCNZWCH *)*i + 37), -1) != 2;
        ++i )
  {
    ;
  }
  if ( i != *((volatile signed __int32 ***)this + 8) )
  {
    v8 = *i;
    if ( *i )
    {
      *a3 = (struct CAudioSessionManager *)v8;
      _InterlockedIncrement(v8 + 3);
    }
    else
    {
      *a3 = 0LL;
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
