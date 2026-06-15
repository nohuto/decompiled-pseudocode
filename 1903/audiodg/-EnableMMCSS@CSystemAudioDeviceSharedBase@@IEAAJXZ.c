/*
 * XREFs of ?EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ @ 0x140031A84
 * Callers:
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x1400321C0 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x140041FDC (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::EnableMMCSS(CSystemAudioDeviceSharedBase *this)
{
  int v2; // ebx
  DWORD v3; // ecx
  DWORD v4; // eax
  DWORD v5; // eax
  __int64 v6; // rcx
  LPVOID lpTlsValue; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 89);
  if ( v3 != -1 )
    goto LABEL_16;
  v4 = TlsAlloc();
  *((_DWORD *)this + 89) = v4;
  if ( v4 == -1 )
  {
    v2 = -2147024882;
    v3 = -1;
  }
  else
  {
    v5 = FlsAlloc(OnThreadDetach);
    *((_DWORD *)this + 90) = v5;
    if ( v5 == -1 )
      v2 = -2147024882;
    else
      FlsSetValue(v5, (PVOID)*((unsigned int *)this + 89));
    v3 = *((_DWORD *)this + 89);
  }
  if ( v3 != -1 )
  {
LABEL_16:
    if ( *((_DWORD *)this + 90) != -1 )
    {
      lpTlsValue = TlsGetValue(v3);
      if ( !lpTlsValue )
      {
        v2 = SetEngineThreadPriority(v6, &lpTlsValue);
        if ( v2 >= 0 )
          TlsSetValue(*((_DWORD *)this + 89), lpTlsValue);
      }
    }
  }
  return (unsigned int)v2;
}
