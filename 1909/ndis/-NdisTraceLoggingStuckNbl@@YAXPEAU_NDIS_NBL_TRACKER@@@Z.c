/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00C3978
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0011AC0 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  __int16 v1; // r10
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int16 v5; // r10
  char *Context; // rax
  const GUID *v7; // r8
  const GUID *cData; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned int v11; // eax
  __int64 v12; // rbx
  const GUID *v13; // r9
  __int64 v14; // r10
  int v15; // r11d
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // r10
  int v22; // r11d
  _DWORD v23[4]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v25; // [rsp+60h] [rbp-19h]
  __int64 v26; // [rsp+68h] [rbp-11h]
  _QWORD *v27; // [rsp+70h] [rbp-9h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  _DWORD *v29; // [rsp+80h] [rbp+7h]
  _QWORD v30[2]; // [rsp+88h] [rbp+Fh] BYREF
  _DWORD v31[2]; // [rsp+98h] [rbp+1Fh] BYREF
  GUID *p_pActivityId; // [rsp+A0h] [rbp+27h]
  __int64 v33; // [rsp+A8h] [rbp+2Fh]
  __int64 v34; // [rsp+B0h] [rbp+37h]
  GUID pActivityId; // [rsp+B8h] [rbp+3Fh] BYREF

  v1 = *((_WORD *)a1 + 8);
  switch ( v1 )
  {
    case 0:
LABEL_6:
      if ( hProvider.LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
        {
          v23[0] = v5;
          v25 = v23;
          Context = (char *)a1->Context;
          v26 = 4LL;
          v27 = Context + 4008;
          v28 = 16LL;
          TlgWrite(&hProvider, &unk_1C00D1210, v3, v4, 4u, &pData);
        }
      }
      return;
    case 1:
      v12 = *((_QWORD *)a1->Context + 2);
      if ( v12 )
      {
        if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
        {
          v23[0] = v15;
          v25 = v23;
          v26 = 4LL;
          v27 = (_QWORD *)(v14 + 672);
          v28 = 16LL;
          v16 = *(unsigned __int16 *)(v12 + 112);
          v17 = *(_QWORD *)(v12 + 120);
          v29 = v31;
          v30[0] = 2LL;
          v31[0] = v16 & 0xFFFFFFFE;
          v30[1] = v17;
          v31[1] = 0;
          v18 = *(_QWORD *)(v12 + 152);
          pActivityId.Data1 = *(_WORD *)(v12 + 144) & 0xFFFE;
          p_pActivityId = &pActivityId;
          v33 = 2LL;
          v34 = v18;
          *(_DWORD *)&pActivityId.Data2 = 0;
          TlgWrite(&hProvider, &unk_1C00D1F70, &pActivityId, v13, 8u, &pData);
        }
      }
      else if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        v23[0] = v22;
        v25 = v23;
        v27 = (_QWORD *)(v21 + 672);
        v26 = 4LL;
        v28 = 16LL;
        TlgWrite(&hProvider, &unk_1C00D2152, v19, v20, 4u, &pData);
      }
      break;
    case 2:
      if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        v23[0] = v10;
        v25 = v23;
        v26 = 4LL;
        v27 = v30;
        v29 = *(_DWORD **)(v9 + 80);
        v11 = *(_WORD *)(v9 + 72) & 0xFFFE;
        v28 = v10;
        v30[0] = v11;
        TlgWrite(&hProvider, &unk_1C00D2121, v7, cData, (UINT32)cData, &pData);
      }
      break;
    default:
      if ( v1 <= 2 || v1 > 5 )
        return;
      goto LABEL_6;
  }
}
