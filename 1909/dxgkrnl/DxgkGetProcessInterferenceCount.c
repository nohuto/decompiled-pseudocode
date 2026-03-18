/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1C0246CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  struct DXGGLOBAL *Global; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12, (__int64)a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(a1);
  *a2 = 0;
  v5 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    if ( *(_DWORD *)(v5 + 40) == 1 )
    {
      v8 = 0;
      v9 = 15LL;
      do
      {
        DXGGLOBAL::GetGlobal(v7, v6);
        if ( DXGGLOBAL::m_pDxgmmsExport[v9 - 15] )
        {
          v13 = 0;
          Global = DXGGLOBAL::GetGlobal(v7, v6);
          v7 = *(_QWORD *)(v5 + 72);
          v6 = *(_QWORD *)((char *)Global + v9 * 8);
          if ( v7 )
            v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)(*(_DWORD *)v6 - 1) + 16);
          if ( v7 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v6 + 8) + 896LL))(v7, &v13);
          *a2 += v13;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < 2 );
    }
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
