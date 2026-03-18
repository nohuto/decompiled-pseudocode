/*
 * XREFs of ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1801B7E8C
 * Callers:
 *     ?ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_CLEAREXCLUDEDSHAREDLIGHTS@@@Z @ 0x1801B77B0 (-ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_CLEAREXCLU.c)
 *     ?ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_CLEARSHAREDLIGHTS@@@Z @ 0x1801B77C0 (-ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_CLEARSHAREDLIGHTS@.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18005B468 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveAllSharedLights(_QWORD *a1, int a2)
{
  unsigned int v2; // ebp
  char v3; // r14
  char *v5; // rbx
  char *v6; // rsi
  bool v7; // r15
  char *v8; // rbx
  char *v9; // rsi
  __int64 v10; // rcx
  _QWORD *i; // rax
  CPtrArrayBase *v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    v8 = (char *)a1[38];
    v9 = v8 + 16;
    while ( v8 != (char *)a1[39] )
    {
      if ( *(v9 - 8) )
      {
        v10 = *(_QWORD *)v8;
        for ( i = (_QWORD *)a1[35]; ; i += 2 )
        {
          if ( i == (_QWORD *)a1[36] )
            goto LABEL_21;
          if ( *i == v10 )
            break;
        }
        v12 = (CPtrArrayBase *)(v10 + 24);
        if ( (*(_QWORD *)v12 & 2) != 0 )
          v13 = *(_QWORD *)(*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v13 = *(_QWORD *)v12 & 1LL;
        v14 = CPtrArrayBase::InsertAt(v12, (unsigned __int64)a1, v13);
        v2 = v14;
        if ( v14 >= 0 )
        {
          v3 = 1;
LABEL_21:
          memmove_0(v8, v9, a1[39] - (_QWORD)v9);
          a1[39] -= 16LL;
          continue;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x5A3u);
        break;
      }
      v8 += 16;
      v9 += 16;
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
        v7 = CPtrArrayBase::Remove((CPtrArrayBase *)(*(_QWORD *)v5 + 24LL), (__int64)a1);
        memmove_0(v5, v6, a1[36] - (_QWORD)v6);
        a1[36] -= 16LL;
        if ( !v3 )
          v3 = v7;
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
