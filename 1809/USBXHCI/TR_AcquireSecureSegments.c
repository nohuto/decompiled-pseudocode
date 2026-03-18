/*
 * XREFs of TR_AcquireSecureSegments @ 0x1C0023730
 * Callers:
 *     TR_EnsureSegments @ 0x1C0024620 (TR_EnsureSegments.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000AA20 (CommonBuffer_AcquireShadowBuffer.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int *PoolWithTag; // rdi
  unsigned int v5; // ebx
  __int64 v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  int v17; // ebx
  _DWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  const char *v22; // rcx
  char v23; // dl
  int v24; // r9d
  _QWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v29; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-48h]
  __int64 v31; // [rsp+40h] [rbp-40h]
  _QWORD v32[6]; // [rsp+48h] [rbp-38h] BYREF

  PoolWithTag = 0LL;
  v30 = &v29;
  v5 = 0;
  v29 = &v29;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v31 = v10;
  if ( !a2 )
  {
LABEL_5:
    v13 = -1;
    v14 = 8 * a2 + 8;
    if ( v14 >= 8 * a2 )
      v13 = 8 * a2 + 8;
    v15 = 0;
    if ( v14 >= 8 * a2 )
      v15 = v13;
    v16 = v15;
    PoolWithTag = (int *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v15, 0x49434858u);
    if ( PoolWithTag )
    {
      memset(v32, 0, sizeof(v32));
      v32[3] = *(_QWORD *)(a1 + 288);
      v20 = *(_QWORD *)(a1 + 40);
      LODWORD(v32[4]) = 40;
      LODWORD(v32[5]) = a2;
      v21 = *(_QWORD *)(v20 + 112);
      if ( a4 )
        KeLowerIrql(0);
      v17 = SecureChannel_SendRequestSynchronously(v21, (unsigned int)v32, 48, (_DWORD)PoolWithTag, v16);
      if ( a4 )
        KfRaiseIrql(2u);
      if ( v17 < 0 )
        goto LABEL_11;
      v17 = *PoolWithTag;
      if ( *PoolWithTag >= 0 )
      {
        if ( PoolWithTag[1] != a2 )
        {
          v17 = -1073741823;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
            2u,
            0xEu,
            0x17u,
            (__int64)&WPP_c0473ac1803d3d5f2d8c1e2b9467d5ec_Traceguids);
          Debug_FreAssertMsg(
            (__int64)"allocateSegmentsOut->NumberOfSegments != SegmentsRequired",
            0,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
            1936);
          goto LABEL_11;
        }
        v25 = v29;
        v26 = 0LL;
        while ( &v29 != v25 )
        {
          v27 = *(_QWORD *)&PoolWithTag[2 * v26 + 2];
          v26 = (unsigned int)(v26 + 1);
          v25[3] = v27;
          v25 = (_QWORD *)*v25;
        }
        v17 = 0;
        v22 = "Segment mismatch";
        v24 = 1955;
        v23 = (_DWORD)v26 == a2;
      }
      else
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          2u,
          0xEu,
          0x16u,
          (__int64)&WPP_c0473ac1803d3d5f2d8c1e2b9467d5ec_Traceguids,
          *PoolWithTag);
        v22 = "TransferRingAllocateSegments Failed";
        v23 = 0;
        v24 = 1927;
      }
      Debug_FreAssertMsg((__int64)v22, v23, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c", v24);
      if ( v17 >= 0 )
      {
        if ( v29 != &v29 )
        {
          **(_QWORD **)(a3 + 8) = v29;
          v29[1] = *(_QWORD *)(a3 + 8);
          *v30 = a3;
          *(_QWORD *)(a3 + 8) = v30;
          v30 = &v29;
          v29 = &v29;
        }
        goto LABEL_33;
      }
    }
    else
    {
      v17 = -1073741670;
    }
LABEL_11:
    v10 = v31;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v11 = CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
    if ( !v11 )
      break;
    v12 = v30;
    if ( (_QWORD **)*v30 != &v29 )
LABEL_36:
      __fastfail(3u);
    v11[1] = v30;
    *v11 = &v29;
    ++v5;
    *v12 = v11;
    v30 = v11;
    if ( v5 >= a2 )
      goto LABEL_5;
  }
  v17 = -1073741670;
LABEL_12:
  while ( 1 )
  {
    v18 = v29;
    if ( v29 == &v29 )
      break;
    if ( (_QWORD **)v29[1] != &v29 )
      goto LABEL_36;
    v19 = *v29;
    if ( *(_QWORD **)(*v29 + 8LL) != v29 )
      goto LABEL_36;
    v29 = (_QWORD *)*v29;
    *(_QWORD *)(v19 + 8) = &v29;
    CommonBuffer_ReleaseBuffer(v10, v18);
  }
LABEL_33:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
  return (unsigned int)v17;
}
