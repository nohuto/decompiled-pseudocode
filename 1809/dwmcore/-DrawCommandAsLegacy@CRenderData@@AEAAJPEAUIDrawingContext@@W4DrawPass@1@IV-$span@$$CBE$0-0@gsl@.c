/*
 * XREFs of ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x180064E3C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(__int64 *, _QWORD, __int128 *, __int64, _DWORD); // rax
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // r8
  __int64 (__fastcall *v33)(__int64 *, __int128 *, __int64); // rax
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  __int128 v38; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v7 = a4 - 459;
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
                    *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
                else
                  return (unsigned int)-2003303421;
              }
              else
              {
                v26 = *(_QWORD *)(a5 + 8);
                v27 = *(_QWORD *)(a1 + 104);
                v28 = *(unsigned int *)(v26 + 4);
                v29 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, _DWORD))(*a2 + 40);
                v38 = *(_OWORD *)(v26 + 8);
                v30 = v29(a2, *(_QWORD *)(v27 + 8 * v28), &v38, v26 + 28, *(_DWORD *)(v26 + 24));
                v5 = v30;
                if ( v30 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x332u);
              }
            }
            else
            {
              v32 = *(_QWORD *)(a5 + 8);
              v33 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(*a2 + 16);
              v38 = *(_OWORD *)(v32 + 4);
              v34 = v33(a2, &v38, v32 + 20);
              v5 = v34;
              if ( v34 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x309u);
            }
          }
          else
          {
            v15 = *(_QWORD *)(a5 + 8);
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(v15 + 4));
            v17 = *a2;
            v38 = *(_OWORD *)(v15 + 8);
            v18 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD))(v17 + 8))(a2, &v38, v16, 0LL);
            v5 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x313u);
          }
        }
        else
        {
          v36 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 80))(
                  a2,
                  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                  (*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)) - 16LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)) != 0LL));
          v5 = v36;
          if ( v36 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x347u);
        }
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(*a2 + 24))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                *(_QWORD *)(a5 + 8) + 8LL,
                0LL);
        v5 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x328u);
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 32))(
             a2,
             *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
             *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x31Eu);
    }
  }
  else
  {
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
    v5 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x33Du);
  }
  return v5;
}
