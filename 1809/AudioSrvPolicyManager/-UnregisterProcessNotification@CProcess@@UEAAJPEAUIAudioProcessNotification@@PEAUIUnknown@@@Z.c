/*
 * XREFs of ?UnregisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x180017550
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x18001919C (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?RemoveNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x180019218 (-RemoveNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTrai.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::UnregisterProcessNotification(
        CProcess *this,
        struct IAudioProcessNotification *a2,
        struct IUnknown *a3)
{
  unsigned int v5; // edi
  __int64 Node; // rax
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp-10h]
  char v11; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown *v12; // [rsp+80h] [rbp+30h] BYREF
  char v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a3;
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 600);
  v5 = -2147024809;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = 0LL;
  Node = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::GetNode(
           (int)this + 640,
           (unsigned int)&v12,
           (unsigned int)&v13,
           (unsigned int)&v11,
           (__int64)&v8);
  if ( Node )
  {
    ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::RemoveNode(
      (char *)this + 640,
      Node,
      v8);
    ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->Release)(a3);
    v5 = 0;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
