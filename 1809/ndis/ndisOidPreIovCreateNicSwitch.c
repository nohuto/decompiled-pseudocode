/*
 * XREFs of ndisOidPreIovCreateNicSwitch @ 0x1C00F9870
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qqqq @ 0x1C00420DC (WPP_SF_qqqq.c)
 *     WPP_SF_qqqDD @ 0x1C004401C (WPP_SF_qqqDD.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F8674 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCreateNicSwitch(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v5; // rax
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  bool v7; // zf
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int8 v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r10
  unsigned int v15; // ecx
  __int64 v16; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  v5 = *a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    WPP_SF_qqqq(0xCu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v1, a1[3], a1[1], v3);
    v5 = *a1;
  }
  if ( !v5 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
  {
    v7 = ndisGetOidSourceHandle(a1[4]) == (_QWORD)&ndisIntReqGeneric;
    goto LABEL_7;
  }
  v9 = *(_QWORD *)(v1 + 3592);
  if ( !v9
    || *(_BYTE *)(v9 + 1) < 2u
    || *(_WORD *)(v9 + 2) < 0x74u
    || !*(_DWORD *)(v9 + 36)
    || *(_DWORD *)(v3 + 4) != 12 )
  {
    goto LABEL_8;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x224u )
  {
    if ( *(_DWORD *)(v3 + 52) >= 0x224u )
    {
      v10 = *(_QWORD *)(v3 + 40);
      if ( *(_BYTE *)(v10 + 1)
        && !*(_DWORD *)(v10 + 12)
        && *(_DWORD *)(v10 + 8) == 1
        && *(_DWORD *)(v10 + 532) <= *(_DWORD *)(*(_QWORD *)(v1 + 3592) + 48LL) )
      {
        v11 = ndisIovHWvRSSSupported(v6);
        if ( v14 < 2u )
        {
          v7 = v11 == 0;
LABEL_7:
          if ( !v7 )
          {
LABEL_8:
            *((_DWORD *)a1 + 10) = -1073741637;
            goto LABEL_9;
          }
LABEL_4:
          v4 = 0;
          goto LABEL_9;
        }
        v15 = *(_DWORD *)(v12 + 548);
        if ( !v11 )
        {
          if ( v15 != 1 )
            goto LABEL_8;
          goto LABEL_4;
        }
        if ( v15 && v15 <= *(_DWORD *)(v13 + 128) )
          goto LABEL_4;
      }
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *(_DWORD *)(v3 + 68) = 548;
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 68) = 548;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
LABEL_9:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    LODWORD(v16) = v4;
    WPP_SF_qqqDD(0xDu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, *a1, a1[3], a1[1], v16, *((_DWORD *)a1 + 10));
  }
  return v4;
}
