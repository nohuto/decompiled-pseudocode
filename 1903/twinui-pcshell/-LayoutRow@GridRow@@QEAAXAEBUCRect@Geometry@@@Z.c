/*
 * XREFs of ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1803795A8
 * Callers:
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x180379740 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180040A08 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008848E (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GridRow::LayoutRow(GridRow *this, const struct Geometry::CRect *a2)
{
  _QWORD *v2; // rsi
  int v5; // r12d
  int v6; // edi
  _QWORD *v7; // r14
  int v8; // ecx
  int v9; // eax
  int v10; // r14d
  int v11; // esi
  int v12; // eax
  __int128 v13; // xmm6
  LANGID ThreadUILanguage_0; // ax
  int v15; // eax
  _QWORD *v16; // rdi
  _QWORD *v17; // r12
  __int64 v18; // r15
  unsigned int v19; // esi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  __int64 v25[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v26; // [rsp+30h] [rbp-40h]
  __int128 v27; // [rsp+40h] [rbp-30h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = *((_DWORD *)this + 1);
  v6 = 0;
  v7 = &v2[*((_QWORD *)this + 4)];
  while ( v2 != v7 )
  {
    if ( v6 )
      v6 += *(_DWORD *)this;
    v6 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 72LL))(*v2, *((unsigned int *)this + 1));
    ++v2;
  }
  v8 = *(_DWORD *)a2;
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_DWORD *)a2 + 1);
  DWORD1(v26) = v10;
  v11 = v10 + v5;
  v12 = (v9 - (v8 + v6)) / 2;
  HIDWORD(v26) = v10 + v5;
  DWORD2(v26) = v8 + v6 + v12;
  LODWORD(v26) = v12 + v8;
  v13 = v26;
  *(_OWORD *)((char *)this + 8) = v26;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v15 = IsBiDiLocale(ThreadUILanguage_0);
  v16 = (_QWORD *)*((_QWORD *)this + 3);
  v17 = &v16[*((_QWORD *)this + 4)];
  if ( v16 != v17 )
  {
    v18 = v15;
    v19 = v11 - v10;
    while ( 1 )
    {
      v25[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
      (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v16)(*v16, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, v25);
      v20 = *v16;
      v27 = v13;
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 72LL))(v20, v19);
      v22 = v27;
      v23 = v21 + v27;
      v24 = v21 + v27 + *(_DWORD *)this;
      DWORD2(v27) = v21 + v27;
      LODWORD(v26) = v24;
      if ( v18 )
      {
        LODWORD(v27) = *((_DWORD *)this + 2) + *((_DWORD *)this + 4) - v23;
        DWORD2(v27) = v27 + v23 - v22;
      }
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25[0] + 104LL))(v25[0], &v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
      if ( ++v16 == v17 )
        break;
      v13 = v26;
    }
  }
}
