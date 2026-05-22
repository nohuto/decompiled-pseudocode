/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18009A770
 * Callers:
 *     <none>
 * Callees:
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z @ 0x18009A064 (-AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18009A3B4 (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A464 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18009AA30 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18009ACC8 (-ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
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
  int Device; // eax
  __int64 v12; // rdx
  RIMDeviceCollection *v13; // rbx
  DWORD v14; // edx
  void *v15; // rcx
  RIMDeviceCollection *v16; // rbx
  void *v17; // rcx
  struct RIMDevice **v18; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v20; // [rsp+40h] [rbp+8h] BYREF

  v9 = a4 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 2 )
        return;
      v20 = 0LL;
      Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v20, 0LL);
      if ( Device < 0 )
      {
        v12 = 397LL;
LABEL_6:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v12,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
          (const char *)(unsigned int)Device);
        return;
      }
      Device = RIMDeviceCollection::ResetDevice(a9, v20);
      if ( Device < 0 )
      {
        v12 = 399LL;
        goto LABEL_6;
      }
    }
    else
    {
      v13 = a9;
      v20 = 0LL;
      Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v20, 0LL);
      if ( Device < 0 )
      {
        v12 = 353LL;
        goto LABEL_6;
      }
      v15 = (void *)*((_QWORD *)v13 + 5);
      if ( v15 )
      {
        if ( !WaitForSingleObject(v15, v14) )
        {
          *((_BYTE *)v13 + 2736) = 1;
          Device = RIMDeviceCollection::OnReadCallbackStatic(v13, 0, 0LL);
          if ( Device < 0 )
          {
            v12 = 378LL;
            goto LABEL_6;
          }
        }
      }
      Device = RIMDeviceCollection::DetachDevice(v13, v20);
      if ( Device < 0 )
      {
        v12 = 382LL;
        goto LABEL_6;
      }
    }
  }
  else
  {
    v16 = a9;
    if ( !*((_QWORD *)a9 + 10) )
      *((_QWORD *)a9 + 10) = a1;
    Device = RIMDeviceCollection::AttachDevice(v16, (__int64)a2, a1, a2, a5, v18);
    if ( Device < 0 )
    {
      v12 = 332LL;
      goto LABEL_6;
    }
    v17 = (void *)*((_QWORD *)v16 + 7);
    if ( v17 )
    {
      *((_BYTE *)v16 + 2736) = 1;
      SetEvent(v17);
    }
  }
}
