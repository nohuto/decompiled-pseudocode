/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180037B80
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180017AC0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180037CD0 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::CloneVisualTree(CClientArea *this, struct CVisual **a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void *v11; // [rsp+28h] [rbp-30h]
  struct CClientArea *v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 30);
  v3 = 0;
  v13 = 0;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 24);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v6 + 320LL))(
             v6,
             *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
             &v13);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x83u, v11);
      }
      else
      {
        v12 = 0LL;
        v8 = CClientArea::Create(v13, &v12);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x87u, v11);
        }
        else
        {
          *a2 = v12;
          v9 = CVisual::CloneVisualTree(this, a2);
          v3 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x92u, v11);
        }
      }
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 136LL))(
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
    v13);
  return v3;
}
