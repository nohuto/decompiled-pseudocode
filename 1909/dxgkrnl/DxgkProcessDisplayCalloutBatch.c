/*
 * XREFs of DxgkProcessDisplayCalloutBatch @ 0x1C0270D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C00420B0 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C02465F8 (-StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026E68C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkProcessDisplayCalloutBatch(__int64 a1, __int64 a2)
{
  int v3; // r14d
  struct DXGGLOBAL *Global; // rax
  bool started; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rbx
  bool v9; // bp
  int v10; // eax
  bool v11; // si
  int v12; // eax
  struct DXGGLOBAL *v13; // rbx
  __int64 *v14; // rax
  struct DXGGLOBAL *v15; // rbx
  __int64 result; // rax
  _BYTE v17[8]; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  started = DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch(
              (struct DXGGLOBAL *)((char *)Global + 1416),
              (struct DISPLAY_CALLOUT_ENTRY **)&P);
  v8 = (__int64 *)P;
  v9 = started;
  if ( !P )
    goto LABEL_22;
  while ( 1 )
  {
    *(_OWORD *)(a1 + 24) = *((_OWORD *)v8 + 4);
    *(_OWORD *)(a1 + 40) = *((_OWORD *)v8 + 5);
    *(_OWORD *)(a1 + 56) = *((_OWORD *)v8 + 6);
    *(_OWORD *)(a1 + 72) = *((_OWORD *)v8 + 7);
    *(_QWORD *)(a1 + 88) = v8[16];
    v10 = *((_DWORD *)v8 + 4);
    if ( v10 == 1 )
    {
      v3 = DxgkHandleMonitorEvent((struct _LUID)v8[3], *((unsigned int *)v8 + 8), *((_DWORD *)v8 + 9), v8[5], a1);
      if ( v3 >= 0 )
      {
        v11 = (*(_BYTE *)a1 & 0x44) == 68;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
    if ( v10 == 2 )
    {
      *(_BYTE *)a1 |= 4u;
      v12 = *((_DWORD *)v8 + 12);
      *(_BYTE *)a1 &= ~0x80u;
      *(_DWORD *)(a1 + 4) = v12;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)v8 + 10);
      *(_QWORD *)(a1 + 16) = v8[3];
LABEL_7:
      v11 = 1;
      goto LABEL_9;
    }
    v11 = v10 == 3;
LABEL_9:
    if ( *((_BYTE *)v8 + 20) )
    {
      v11 = 1;
      *(_QWORD *)(a1 + 96) = v8 + 7;
    }
    else
    {
      DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)v8);
    }
    if ( v11 )
      goto LABEL_20;
    v13 = DXGGLOBAL::GetGlobal(v7, v6);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGGLOBAL *)((char *)v13 + 1416), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v14 = (__int64 *)((char *)v13 + 1456);
    v8 = (__int64 *)*((_QWORD *)v13 + 182);
    if ( v8 == v14 )
      break;
    if ( (__int64 *)v8[1] != v14 || (v7 = *v8, *(__int64 **)(*v8 + 8) != v8) )
      __fastfail(3u);
    *v14 = v7;
    *(_QWORD *)(v7 + 8) = v14;
    v9 = *v14 != (_QWORD)v14;
    if ( v18 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  v9 = 0;
LABEL_20:
  v15 = DXGGLOBAL::GetGlobal(v7, v6);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGGLOBAL *)((char *)v15 + 1416), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  *((_QWORD *)v15 + 184) = 0LL;
  if ( v18 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
LABEL_22:
  result = (unsigned int)v3;
  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFE | !v9;
  return result;
}
