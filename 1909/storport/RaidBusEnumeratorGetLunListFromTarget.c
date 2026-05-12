/*
 * XREFs of RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013DD0
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C0013A00 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C0013FBC (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C0014E84 (RaidSelectDeviceDumpCollectionMode.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0038C58 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038D8C (WPP_SF_qD.c)
 *     WPP_SF_qddd @ 0x1C00391AC (WPP_SF_qddd.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunListFromTarget(_QWORD *a1, int a2, int a3, _BYTE *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  unsigned __int8 *v11; // rdi
  unsigned int v12; // ebx
  unsigned __int16 i; // bx
  unsigned __int8 *v14; // rdi
  __int64 v15; // rbp
  unsigned __int16 v16; // bx
  int v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 *v18; // [rsp+48h] [rbp-30h] BYREF

  v17 = 16;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qddd(
      WPP_GLOBAL_Control->AttachedDevice,
      15LL,
      &WPP_09b64121c92431e1d769322adfcd0464_Traceguids,
      *a1,
      (unsigned __int8)a2,
      BYTE1(a2),
      BYTE2(a2));
  }
  v8 = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
  v9 = v8;
  if ( v8 >= 0 )
    goto LABEL_8;
  if ( v8 != -1073741789 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        16LL,
        &WPP_09b64121c92431e1d769322adfcd0464_Traceguids,
        (unsigned int)v8);
    }
    return v9;
  }
  result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
  if ( (_DWORD)result == -1073741789 )
  {
    v17 = 8 * *(unsigned __int8 *)(*a1 + 450LL) + 8;
    result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
  }
  if ( (int)result >= 0 )
  {
LABEL_8:
    memset(a4, 0, 0xFFuLL);
    v11 = v18;
    v12 = (unsigned int)(v18[3] | ((v18[2] | ((v18[1] | (*v18 << 8)) << 8)) << 8)) >> 3;
    RaidSelectDeviceDumpCollectionMode(*a1);
    if ( v12 )
    {
      v14 = v11 + 9;
      v15 = v12;
      do
      {
        v16 = _byteswap_ushort(*(_WORD *)(v14 - 1)) & 0x3FFF;
        if ( v16 >= 0xFFu )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          {
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
              WPP_SF_qD(
                WPP_GLOBAL_Control->AttachedDevice,
                17LL,
                &WPP_09b64121c92431e1d769322adfcd0464_Traceguids,
                *a1,
                v16);
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_09b64121c92431e1d769322adfcd0464_Traceguids, v16);
            }
          }
        }
        else
        {
          a4[v16] = 1;
        }
        v14 += 8;
        --v15;
      }
      while ( v15 );
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_09b64121c92431e1d769322adfcd0464_Traceguids, *a1);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_09b64121c92431e1d769322adfcd0464_Traceguids);
      }
    }
    for ( i = 0; i < 0xFFu; ++i )
    {
      if ( *a4
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_09b64121c92431e1d769322adfcd0464_Traceguids, i);
      }
      ++a4;
    }
    return 0LL;
  }
  return result;
}
