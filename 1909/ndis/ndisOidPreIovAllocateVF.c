/*
 * XREFs of ndisOidPreIovAllocateVF @ 0x1C00B2BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AF9F8 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  char VF; // bl
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  char v8[4]; // [rsp+40h] [rbp-18h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      29,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      (char)v1);
  if ( v1[1] != 12 )
    goto LABEL_14;
  VF = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( v1[12] >= 0x660u )
  {
    if ( v1[13] < 0x660u )
    {
      v4 = -1073676266;
      goto LABEL_8;
    }
    v5 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_16;
    v6 = *(_QWORD *)(v5 + 4608);
    if ( v6 && *(_QWORD *)(v5 + 3568) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
    {
      VF = ndisIovAllocateVF(a1);
      goto LABEL_16;
    }
LABEL_14:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_15;
  }
  v4 = -1073676268;
LABEL_8:
  v1[17] = 1632;
  *((_DWORD *)a1 + 10) = v4;
LABEL_15:
  VF = 1;
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Eu,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VF,
      *(_DWORD *)v8);
  }
  return VF;
}
