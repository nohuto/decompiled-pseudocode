/*
 * XREFs of ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180149650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z @ 0x18014AD58 (-ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z.c)
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18014B728 (-CreateInstance@TelephonyControllerCallInstance@@SAJAEAV-$unique_any_t@V-$unique_storage@U-$reso.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TelephonyController::CreateCallInstance(
        TelephonyController *this,
        struct _TelephonyInstanceData *a2,
        struct ITelephonyControllerCallInstance **a3)
{
  int v6; // ebx
  int Instance; // eax
  struct IKsControl *v9; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v11[520]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v12; // [rsp+268h] [rbp+168h]
  _BYTE v13[520]; // [rsp+26Ch] [rbp+16Ch] BYREF
  unsigned int v14; // [rsp+474h] [rbp+374h]

  v10[1] = -2LL;
  v10[0] = 0LL;
  v9 = 0LL;
  memset_0(v11, 0, 0x418uLL);
  if ( a3 )
  {
    v6 = (*(__int64 (__fastcall **)(TelephonyController *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v11);
    if ( v6 >= 0 )
    {
      v6 = TelephonyController::ObtainKsControl(this, *((_DWORD *)a2 + 1), &v9);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD *))(*(_QWORD *)g_AudioResourceManager
                                                                                 + 72LL))(
               g_AudioResourceManager,
               v10);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, _BYTE *, _QWORD, int, _DWORD))(*(_QWORD *)g_AudioResourceManager + 64LL))(
                 g_AudioResourceManager,
                 0LL,
                 v11,
                 v12,
                 1,
                 0);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, _BYTE *, _QWORD, int, int))(*(_QWORD *)g_AudioResourceManager + 64LL))(
                   g_AudioResourceManager,
                   0LL,
                   v13,
                   v14,
                   1,
                   1);
            if ( v6 >= 0 )
            {
              Instance = TelephonyControllerCallInstance::CreateInstance(v10, v9, a2, a3);
              v6 = 0;
              if ( Instance < 0 )
                v6 = Instance;
            }
          }
        }
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v9 )
    ((void (__fastcall *)(struct IKsControl *))v9->lpVtbl->Release)(v9);
  if ( v10[0] )
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  return (unsigned int)v6;
}
