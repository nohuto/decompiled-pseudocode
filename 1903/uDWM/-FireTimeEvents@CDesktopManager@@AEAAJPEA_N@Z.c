/*
 * XREFs of ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x180036B5C
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800412D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18004FDAA (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800820A0 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::FireTimeEvents(CDesktopManager *this, bool *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  const void *v5; // r9
  __int64 v6; // rsi
  int v7; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // [rsp+30h] [rbp-21h]
  _BYTE *v12; // [rsp+38h] [rbp-19h] BYREF
  _BYTE *v13; // [rsp+40h] [rbp-11h]
  int v14; // [rsp+48h] [rbp-9h]
  int v15; // [rsp+4Ch] [rbp-5h]
  unsigned int v16; // [rsp+50h] [rbp-1h]
  _BYTE v17[80]; // [rsp+58h] [rbp+7h] BYREF

  v2 = *((_DWORD *)this + 150);
  v3 = 0;
  if ( v2 )
  {
    v16 = 0;
    v5 = (const void *)*((_QWORD *)this + 72);
    v12 = v17;
    v13 = v17;
    v14 = 10;
    v15 = 10;
    *a2 = 1;
    if ( v2 > 0xA )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v12, 8, v2, v5);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u, v11);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x73Bu, v11);
LABEL_16:
        DynArrayImpl<0>::~DynArrayImpl<0>(&v12);
        return (unsigned int)v3;
      }
      v2 = v16;
    }
    else
    {
      memcpy_0(v17, v5, 8LL * v2);
      v16 = v2;
    }
    v6 = 0LL;
    if ( v2 )
    {
      while ( 1 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v12[8 * v6] + 144LL))(*(_QWORD *)&v12[8 * v6]);
        v3 = v7;
        if ( v7 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v16 )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x73Fu, v11);
      goto LABEL_16;
    }
LABEL_7:
    if ( v12 != v13 )
    {
      (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      v12 = 0LL;
    }
  }
  if ( *((_BYTE *)this + 23) )
  {
    v10 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37));
    v3 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x745u, v11);
  }
  return (unsigned int)v3;
}
