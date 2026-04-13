/*
 * XREFs of ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___ @ 0x180036310
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180029AC0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023DB8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x1800289B0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     _lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator() @ 0x18002A1A0 (_lambda_c7a3d71a2342ccc4636948ba7f796bf6_--operator().c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002DF1C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x1800376A4 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x18003787C (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___(
        void *Src,
        __int64 a2,
        HSTRING a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  WCHAR *StringRawBuffer; // rax
  int v15; // eax
  __int64 *v16; // rbx
  volatile signed __int32 *v17; // rdi
  int v19; // esi
  __int64 v20; // rdx
  volatile signed __int32 *v21; // rdi
  _BYTE v22[8]; // [rsp+30h] [rbp-30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  _QWORD v25[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v27; // [rsp+A8h] [rbp+48h] BYREF

  v24 = -2LL;
  LOBYTE(v27) = 0;
  if ( a4 <= 0xB )
  {
    v11 = 2053;
    if ( _bittest(&v11, a4) )
    {
      if ( a2 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 48LL))(
                a2,
                a3,
                a4,
                a5,
                v22);
        if ( v12 >= 0 )
        {
          if ( v22[0] )
          {
            v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, int *))(*(_QWORD *)a2 + 64LL))(
                    a2,
                    a3,
                    a4,
                    a5,
                    &v27);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x11D,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
                (const char *)(unsigned int)v15);
            if ( !(_BYTE)v27 )
              goto LABEL_12;
            goto LABEL_19;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x118,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v12);
        }
      }
      if ( a4 )
      {
        if ( a4 == 2 )
          anonymous_namespace_::PlacementHealth::HandleEvent_9_(Src);
      }
      else
      {
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        v13 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
        StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
        anonymous_namespace_::GetImpressionEventExpirationTime(Src, StringRawBuffer, v13);
      }
    }
  }
LABEL_19:
  v19 = lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator()(a6, a4);
  if ( v19 < 0 )
  {
    v20 = 299LL;
    goto LABEL_21;
  }
  if ( a2 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(a2, a3, a4, a5);
    if ( v19 < 0 )
    {
      v20 = 302LL;
      goto LABEL_21;
    }
  }
  if ( (_BYTE)v27 )
  {
    v19 = lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator()(a6, 0xCu);
    if ( v19 < 0 )
    {
      v20 = 308LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v19);
      v21 = (volatile signed __int32 *)a7[1];
      if ( v21 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
      return (unsigned int)v19;
    }
  }
LABEL_12:
  v16 = a7;
  std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
    v25,
    a7);
  anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___(Src);
  v17 = (volatile signed __int32 *)v16[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return 0LL;
}
