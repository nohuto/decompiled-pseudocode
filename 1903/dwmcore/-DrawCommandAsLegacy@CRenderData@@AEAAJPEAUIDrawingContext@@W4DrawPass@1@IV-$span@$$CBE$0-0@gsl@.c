/*
 * XREFs of ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x180092810
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800961D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawCommandAsLegacy(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v7; // r9d
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // ecx
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // r9d
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 (__fastcall *v30)(__int64 *, _QWORD, __int128 *, __int64, _DWORD); // rax
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // r8
  __int64 (__fastcall *v34)(__int64 *, __int128 *, __int64); // rax
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // r8
  __int64 v38; // r10
  __int64 (__fastcall *v39)(__int64 *, _QWORD, __int64); // rax
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // ecx
  __int128 v43; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v7 = a4 - 534;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v12 = v8 - 2;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v24 = v14 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 == 1 )
                  (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 88))(
                    a2,
                    *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
                else
                  return (unsigned int)-2003303421;
              }
              else
              {
                v26 = *(_QWORD *)(a5 + 8);
                v27 = *a2;
                v28 = *(_QWORD *)(a1 + 120);
                v29 = *(unsigned int *)(v26 + 4);
                v30 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, _DWORD))(v27 + 40);
                v43 = *(_OWORD *)(v26 + 8);
                v31 = v30(a2, *(_QWORD *)(v28 + 8 * v29), &v43, v26 + 28, *(_DWORD *)(v26 + 24));
                v5 = v31;
                if ( v31 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x33Bu, 0LL);
              }
            }
            else
            {
              v33 = *(_QWORD *)(a5 + 8);
              v34 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(*a2 + 16);
              v43 = *(_OWORD *)(v33 + 4);
              v35 = v34(a2, &v43, v33 + 20);
              v5 = v35;
              if ( v35 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x312u, 0LL);
            }
          }
          else
          {
            v15 = *(_QWORD *)(a5 + 8);
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(v15 + 4));
            v17 = *a2;
            v43 = *(_OWORD *)(v15 + 8);
            v18 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD))(v17 + 8))(a2, &v43, v16, 0LL);
            v5 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x31Cu, 0LL);
          }
        }
        else
        {
          v37 = *(_QWORD *)(a5 + 8);
          v38 = *(_QWORD *)(a1 + 120);
          v39 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 80);
          v40 = *(_QWORD *)(v38 + 8LL * *(unsigned int *)(v37 + 8));
          v41 = v39(a2, *(_QWORD *)(v38 + 8LL * *(unsigned int *)(v37 + 4)), (v40 - 16) & -(__int64)(v40 != 0));
          v5 = v41;
          if ( v41 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x350u, 0LL);
        }
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(*a2 + 24))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                *(_QWORD *)(a5 + 8) + 8LL,
                0LL);
        v5 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x331u, 0LL);
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 32))(
             a2,
             *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
             *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x327u, 0LL);
    }
  }
  else
  {
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
    v5 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x346u, 0LL);
  }
  return v5;
}
