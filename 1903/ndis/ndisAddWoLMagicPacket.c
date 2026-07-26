/*
 * XREFs of ndisAddWoLMagicPacket @ 0x1C00349A8
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0115320 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisAddWoLMagicPacket(KSPIN_LOCK *a1)
{
  unsigned int v2; // edi
  KSPIN_LOCK v3; // rsi
  int v4; // edx
  KIRQL v5; // dl
  KSPIN_LOCK v6; // rax
  int v7; // edx
  unsigned int SetMiniport; // eax
  char v10[256]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v11[52]; // [rsp+140h] [rbp+40h] BYREF

  v2 = 0;
  v3 = 0LL;
  memset(v10, 0, 0xF8uLL);
  memset(v11, 0, 0xC4uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      83,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)a1);
  }
  v5 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  v6 = a1[121];
  while ( v6 )
  {
    v3 = v6;
    if ( *(_DWORD *)(v6 + 60) == 2 )
      break;
    v6 = *(_QWORD *)v6;
    v3 = 0LL;
  }
  a1[65] = 0LL;
  KeReleaseSpinLock(a1 + 12, v5);
  if ( !v3 )
  {
    v11[0] = 12845440;
    v11[3] = 2;
    LOWORD(v11[4]) = MagicPacketStr.Length;
    memcpy_s((char *)&v11[4] + 2, 0x80uLL, off_1C00E54E8, MagicPacketStr.Length);
    memset(v10, 0, 0xF8uLL);
    *(_DWORD *)&v10[8] = 0;
    *(_DWORD *)&v10[88] |= 0x100008u;
    *(_QWORD *)&v10[104] = &ndisIntReqGeneric;
    *(_DWORD *)v10 = 15466902;
    *(_QWORD *)&v10[40] = v11;
    *(_DWORD *)&v10[32] = -50265846;
    *(_DWORD *)&v10[4] = 1;
    *(_DWORD *)&v10[48] = 196;
    SetMiniport = ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v10, 0, 0LL, 0LL);
    v2 = SetMiniport;
    if ( SetMiniport )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        84,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        SetMiniport);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      85,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)a1,
      v2);
  }
  return v2;
}
