/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801F95E4
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801EBA7C (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATION_INPUT_INFO *a1,
        struct CManipulationFrame **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // edx
  _QWORD *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD); // rsi
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int i; // r9d
  __int64 v15; // r8
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a1 + 3);
  v5 = 0;
  if ( v4
    && (v6 = (unsigned int)(v4 - 1), (unsigned __int64)(232 * v6) <= 0xFFFFFFFF)
    && (unsigned int)(232 * v6 + 328) >= 0x148 )
  {
    v7 = 232 * v6 + 328;
  }
  else
  {
    v7 = 0;
  }
  v8 = WPF::ProcessHeapImpl::AllocClear(v7);
  *a2 = 0LL;
  memset_0(v8, 0, 0x148uLL);
  v9 = (__int64 (__fastcall ***)(_QWORD))v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)a1;
    v11 = *((_DWORD *)a1 + 3);
    v12 = *((_DWORD *)a1 + 6);
    *v8 = &CManipulationFrame::`vftable';
    v8[4] = v10;
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 4) = v11;
    *((_DWORD *)v8 + 6) = v12;
  }
  else
  {
    v9 = 0LL;
  }
  v21 = v9;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v21);
  if ( v9 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 3); LOBYTE(v9[v15 + 40]) &= ~1u )
    {
      v15 = 29LL * i;
      v16 = 224LL * i++;
      v17 = &v9[v15 + 12];
      v18 = (_OWORD *)((char *)a1 + v16 + 16);
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
      v9[v15 + 15] = (__int64 (__fastcall **)(_QWORD))*(unsigned int *)((char *)a1 + v16 + 208);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v21);
    *a2 = (struct CManipulationFrame *)v9;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x31u);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
  return v5;
}
