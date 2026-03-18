/*
 * XREFs of ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C79FC
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C798C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C003F92C (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C014C294 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(DXGSESSIONDATA *this)
{
  __int64 v2; // r8
  ULONG MessageId; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  ReferenceCounted *v12; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-31h] BYREF
  char v14; // [rsp+58h] [rbp-29h]
  union _LARGE_INTEGER v15; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-19h] BYREF
  _PORT_MESSAGE v17[2]; // [rsp+78h] [rbp-9h] BYREF

  v12 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGSESSIONDATA *)((char *)this + 18824), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( *((_DWORD *)this + 4717) == *((_DWORD *)this + 4716) )
    goto LABEL_2;
  v5 = *((_QWORD *)this + 2359);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v6 + 24) = *(unsigned int *)this;
    WdLogEvent5_WdEvent(v6);
LABEL_2:
    if ( v14 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
    MessageId = 0;
    goto LABEL_5;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v12, *((_QWORD *)this + 2359), v2);
  v7 = *((_DWORD *)this + 4716);
  if ( v14 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  memset(v17, 0, 0x48uLL);
  v16 = 72LL;
  v15.QuadPart = -50000000LL;
  v8 = DispBrokerClient::SendDisplayBrokerMessage(
         (DXGSESSIONDATA *)((char *)this + 18776),
         0x120000u,
         (struct _PORT_MESSAGE *)(((unsigned __int64)v12 + 16) & -(__int64)(v12 != 0LL)),
         0LL,
         v17,
         &v16,
         0LL,
         &v15);
  MessageId = v8;
  if ( v8 == 192 )
  {
    v11 = WdLogNewEntry5_WdWarning(v10, v9, v2);
    MessageId = -1073741749;
    *(_QWORD *)(v11 + 24) = *(unsigned int *)this;
    *(_QWORD *)(v11 + 32) = -1073741749LL;
    WdLogEvent5_WdWarning(v11);
  }
  else if ( v8 >= 0 )
  {
    MessageId = v17[1].MessageId;
    if ( (v17[1].MessageId & 0x80000000) == 0 )
    {
      DXGSESSIONDATA::SetDisplayConfigDone(this, v7);
      MessageId = v17[1].MessageId;
    }
  }
LABEL_5:
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v12, 0LL, v2);
  return MessageId;
}
