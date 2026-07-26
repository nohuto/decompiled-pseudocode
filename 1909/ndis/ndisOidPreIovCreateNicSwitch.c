/*
 * XREFs of ndisOidPreIovCreateNicSwitch @ 0x1C00B2FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C0025880 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0025E90 (WPP_RECORDER_SF_qqqDD.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A8B0 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovCreateNicSwitch(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // rcx
  bool v8; // zf
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int8 v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // r10
  unsigned int v16; // ecx

  v2 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 1;
  v6 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0xCu,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v2,
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 8),
      v4);
    v6 = *(_QWORD *)a1;
  }
  if ( !v6 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v2) )
  {
    v8 = ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) == (_QWORD)&ndisIntReqGeneric;
    goto LABEL_7;
  }
  v10 = *(_QWORD *)(v2 + 3568);
  if ( !v10
    || *(_BYTE *)(v10 + 1) < 2u
    || *(_WORD *)(v10 + 2) < 0x74u
    || !*(_DWORD *)(v10 + 36)
    || *(_DWORD *)(v4 + 4) != 12 )
  {
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v4 + 48) >= 0x224u )
  {
    if ( *(_DWORD *)(v4 + 52) >= 0x224u )
    {
      v11 = *(_QWORD *)(v4 + 40);
      if ( *(_BYTE *)(v11 + 1)
        && !*(_DWORD *)(v11 + 12)
        && *(_DWORD *)(v11 + 8) == 1
        && *(_DWORD *)(v11 + 532) <= *(_DWORD *)(*(_QWORD *)(v2 + 3568) + 48LL) )
      {
        v12 = ndisIovHWvRSSSupported(v7);
        if ( v15 < 2u )
        {
          v8 = v12 == 0;
LABEL_7:
          if ( !v8 )
          {
LABEL_8:
            *(_DWORD *)(a1 + 40) = -1073741637;
            goto LABEL_9;
          }
LABEL_4:
          v5 = 0;
          goto LABEL_9;
        }
        v16 = *(_DWORD *)(v13 + 548);
        if ( !v12 )
        {
          if ( v16 != 1 )
            goto LABEL_8;
          goto LABEL_4;
        }
        if ( v16 && v16 <= *(_DWORD *)(v14 + 128) )
          goto LABEL_4;
      }
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
    else
    {
      *(_DWORD *)(v4 + 68) = 548;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v4 + 68) = 548;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0xDu,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 8),
      v5,
      *(_DWORD *)(a1 + 40));
  return v5;
}
