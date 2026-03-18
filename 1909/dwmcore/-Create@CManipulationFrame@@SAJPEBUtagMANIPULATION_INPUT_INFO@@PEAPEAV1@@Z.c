/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x18025E504
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802382EC (-ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATION_INPUT_INFO *a1,
        struct CManipulationFrame **a2)
{
  int v2; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD); // rax
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  __int64 (__fastcall ***v9)(_QWORD); // rdi
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int i; // r9d
  __int64 v15; // r8
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 9);
  if ( !v2 || (v5 = 248LL * (unsigned int)(v2 - 1), v5 > 0xFFFFFFFF) || (v6 = v5 + 392, v6 < 0x188) )
    v6 = 0;
  v7 = (__int64 (__fastcall ***)(_QWORD))DefaultHeap::AllocClear(v6);
  *a2 = 0LL;
  v8 = v7;
  memset_0(v7, 0, 0x188uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *((_DWORD *)a1 + 9);
    v11 = *((_DWORD *)a1 + 12);
    *v8 = (__int64 (__fastcall **)(_QWORD))&CManipulationFrame::`vftable';
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 4) = v10;
    *((_DWORD *)v8 + 6) = v11;
    *((_OWORD *)v8 + 2) = *(_OWORD *)a1;
    *((_OWORD *)v8 + 3) = *((_OWORD *)a1 + 1);
  }
  else
  {
    v9 = 0LL;
  }
  v21 = v9;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v21);
  if ( v9 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 9); LOBYTE(v9[v15 + 48]) &= ~1u )
    {
      v15 = 31LL * i;
      v16 = 240LL * i++;
      v17 = &v9[v15 + 18];
      v18 = (_OWORD *)((char *)a1 + v16 + 40);
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17 += 8;
      v19 = v18[7];
      v18 += 8;
      *(v17 - 1) = v19;
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v9[v15 + 21] = (__int64 (__fastcall **)(_QWORD))*(unsigned int *)((char *)a1 + v16 + 232);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v21);
    v13 = 0;
    *a2 = (struct CManipulationFrame *)v9;
    (*v9)[1](v9);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x2Cu, 0LL);
  }
  return v13;
}
