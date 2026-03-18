/*
 * XREFs of ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800C7C80
 * Callers:
 *     ?ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEARSHAREDLIGHTS@@@Z @ 0x1800C7C70 (-ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEARSHAREDLIGH.c)
 *     ?ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEAREXCLUDEDSHAREDLIGHTS@@@Z @ 0x1801C2724 (-ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEAREX.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18007BAC4 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BBFA0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveAllSharedLights(_QWORD *a1, int a2)
{
  unsigned int v2; // r14d
  char v3; // r12
  char *v5; // rbx
  char *v6; // rbp
  __int64 v7; // rdi
  bool v8; // di
  char *v10; // rbx
  char *v11; // rdi
  __int64 v12; // r15
  _QWORD *i; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  signed int v16; // eax
  __int64 v17; // rcx

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    v10 = (char *)a1[38];
    v11 = v10 + 16;
    while ( v10 != (char *)a1[39] )
    {
      if ( *(v11 - 8) )
      {
        v12 = *(_QWORD *)v10;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)v10 + 272LL))(*(_QWORD *)v10, a1);
        for ( i = (_QWORD *)a1[35]; ; i += 2 )
        {
          if ( i == (_QWORD *)a1[36] )
            goto LABEL_24;
          if ( *i == v12 )
            break;
        }
        v14 = *(_QWORD *)(v12 + 24);
        if ( (v14 & 2) != 0 )
          v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v15 = *(_QWORD *)(v12 + 24) & 1LL;
        v16 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v12 + 24), (unsigned __int64)a1, v15);
        v2 = v16;
        if ( v16 >= 0 )
        {
          v3 = 1;
LABEL_24:
          memmove_0(v10, v11, a1[39] - (_QWORD)v11);
          a1[39] -= 16LL;
          continue;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x5F5u, 0LL);
        break;
      }
      v10 += 16;
      v11 += 16;
    }
  }
  else
  {
    v5 = (char *)a1[35];
    v6 = v5 + 16;
    while ( v5 != (char *)a1[36] )
    {
      if ( *(v6 - 8) )
      {
        v7 = *(_QWORD *)v5;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)v5 + 272LL))(*(_QWORD *)v5, a1);
        v8 = CPtrArrayBase::Remove((CPtrArrayBase *)(v7 + 24), (__int64)a1);
        memmove_0(v5, v6, a1[36] - (_QWORD)v6);
        a1[36] -= 16LL;
        if ( !v3 )
          v3 = v8;
      }
      else
      {
        v5 += 16;
        v6 += 16;
      }
    }
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 5LL);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 1LL);
  }
  return v2;
}
