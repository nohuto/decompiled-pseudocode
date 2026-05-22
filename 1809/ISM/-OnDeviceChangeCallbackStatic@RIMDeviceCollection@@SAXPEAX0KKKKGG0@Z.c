/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18005E010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18005E1E0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E9CC (-FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z @ 0x18005EA38 (-AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18005EC6C (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMDeviceCollection::OnDeviceChangeCallbackStatic(
        void *a1,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        RIMDeviceCollection *a9)
{
  int v9; // r9d
  int v10; // r9d
  RIMDeviceCollection *v11; // rdi
  int DeviceHandle; // eax
  const char *v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rbx
  bool v17; // zf
  int v18; // eax
  int v19; // edi
  RIMDeviceCollection *v20; // rbx
  void *v21; // rcx
  RIMDeviceCollection *v22; // rbx
  void *v23; // rcx
  struct RIMDevice **v24; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v26; // [rsp+40h] [rbp+8h] BYREF

  v9 = a4 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 2 )
      {
        v11 = a9;
        v26 = 0LL;
        DeviceHandle = RIMDeviceCollection::FindDeviceHandle(a9, a2, &v26, 0LL);
        if ( DeviceHandle < 0 )
        {
          v14 = 397LL;
LABEL_6:
          v15 = (unsigned int)DeviceHandle;
LABEL_7:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v14,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)v15);
          return;
        }
        v16 = *((_QWORD *)v26 + 4);
        if ( *(_DWORD *)(v16 + 8) < 0x3D8u )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x46C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            v13);
          JUMPOUT(0x18005E1D7LL);
        }
        v17 = (*(_DWORD *)(v16 + 4) & 0xFFFFFEFF) == 0;
        *(_BYTE *)(v16 + 42) = 1;
        if ( v17
          || (v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v11 + 2) + 48LL))(
                      *((_QWORD *)v11 + 2),
                      v16),
              v19 = v18,
              v18 >= 0) )
        {
          *(_BYTE *)(v16 + 42) = 0;
          v19 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x476,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)v18);
        }
        if ( v19 < 0 )
        {
          v15 = (unsigned int)v19;
          v14 = 399LL;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v20 = a9;
      v26 = 0LL;
      DeviceHandle = RIMDeviceCollection::FindDeviceHandle(a9, a2, &v26, 0LL);
      if ( DeviceHandle < 0 )
      {
        v14 = 353LL;
        goto LABEL_6;
      }
      v21 = (void *)*((_QWORD *)v20 + 5);
      if ( v21 )
      {
        if ( !WaitForSingleObject(v21, 0) )
        {
          *((_BYTE *)v20 + 2736) = 1;
          DeviceHandle = RIMDeviceCollection::OnReadCallbackStatic(v20, 0, 0LL);
          if ( DeviceHandle < 0 )
          {
            v14 = 378LL;
            goto LABEL_6;
          }
        }
      }
      DeviceHandle = RIMDeviceCollection::DetachDevice(v20, v26);
      if ( DeviceHandle < 0 )
      {
        v14 = 382LL;
        goto LABEL_6;
      }
    }
  }
  else
  {
    v22 = a9;
    if ( !*((_QWORD *)a9 + 10) )
      *((_QWORD *)a9 + 10) = a1;
    DeviceHandle = RIMDeviceCollection::AttachDevice(v22, (unsigned int)a2, a1, a2, a5, v24);
    if ( DeviceHandle < 0 )
    {
      v14 = 332LL;
      goto LABEL_6;
    }
    v23 = (void *)*((_QWORD *)v22 + 7);
    if ( v23 )
    {
      *((_BYTE *)v22 + 2736) = 1;
      SetEvent(v23);
    }
  }
}
