/*
 * XREFs of Register_ReadSecureMmio @ 0x1C00683B4
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001890 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     XilRegister_ReadBufferUlong @ 0x1C0020C98 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUchar @ 0x1C0020CE0 (XilRegister_ReadUchar.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUlong64 @ 0x1C0020D5C (XilRegister_ReadUlong64.c)
 *     XilRegister_ReadUshort @ 0x1C0020DC8 (XilRegister_ReadUshort.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall Register_ReadSecureMmio(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, void *a5)
{
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // esi
  _DWORD *PoolWithTag; // rbx
  __int64 v15; // [rsp+38h] [rbp-49h]
  _QWORD v16[7]; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-9h] BYREF

  v7 = a4;
  memset(v16, 0, sizeof(v16));
  v17[0] = 0LL;
  v17[1] = 0LL;
  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
      2462);
  v8 = 8LL;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1u:
        v9 = 2LL;
        break;
      case 2u:
        v9 = 4LL;
        break;
      case 3u:
        v9 = 8LL;
        break;
      default:
LABEL_17:
        v11 = 0;
        goto LABEL_18;
    }
  }
  else
  {
    v9 = 1LL;
  }
  v10 = v9 * v7;
  if ( (unsigned __int64)(v9 * v7) > 0xFFFFFFFF )
    goto LABEL_17;
  if ( !v10 )
    goto LABEL_17;
  v11 = v10 + 8;
  if ( v10 + 8 < v10 )
    goto LABEL_17;
  if ( v11 < 0x10 )
    v11 = 16;
LABEL_18:
  switch ( a3 )
  {
    case 0u:
      v8 = 1LL;
LABEL_26:
      v12 = v8 * v7;
      if ( (unsigned __int64)(v8 * v7) <= 0xFFFFFFFF )
        goto LABEL_28;
      break;
    case 1u:
      v8 = 2LL;
      goto LABEL_26;
    case 2u:
      v8 = 4LL;
      goto LABEL_26;
    case 3u:
      goto LABEL_26;
  }
  v12 = 0;
LABEL_28:
  if ( v11 <= 0x10 )
  {
    PoolWithTag = v17;
    v11 = 16;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v11, 0x49434858u);
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x4Au,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v11);
      return;
    }
  }
  v16[3] = *(_QWORD *)(a1 + 120);
  v16[5] = a2;
  *(_OWORD *)&v16[1] = 0LL;
  v16[4] = 10LL;
  v16[6] = __PAIR64__(v7, a3);
  if ( (int)SecureChannel_SendRequestSynchronously(v15, (unsigned int)v16, 56, (_DWORD)PoolWithTag, v11) >= 0 )
  {
    if ( (int)*PoolWithTag >= 0 )
    {
      memmove(a5, PoolWithTag + 2, v12);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x4Bu,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        *PoolWithTag);
    }
  }
  if ( PoolWithTag && PoolWithTag != (_DWORD *)v17 )
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
}
