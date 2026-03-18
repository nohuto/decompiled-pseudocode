/*
 * XREFs of ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800333C8
 * Callers:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x180033324 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18007BAC4 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BBFA0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveLight(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  bool v4; // r14
  char *v7; // rcx
  char *v8; // r8
  _QWORD *i; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ecx

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    for ( i = (_QWORD *)a1[38]; i != (_QWORD *)a1[39]; i += 2 )
    {
      if ( *i == a2 )
      {
        v11 = (_QWORD *)a1[35];
        v12 = (_QWORD *)a1[36];
        while ( v11 != v12 )
        {
          if ( *v11 == a2 )
          {
            v13 = *(_QWORD *)(a2 + 24);
            if ( (v13 & 2) != 0 )
              v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v14 = *(_QWORD *)(a2 + 24) & 1LL;
            v15 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1, v14);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x568u, 0LL);
              return v3;
            }
            v4 = 1;
            break;
          }
          v11 += 2;
        }
        memmove_0(i, i + 2, a1[39] - (_QWORD)(i + 2));
        a1[39] -= 16LL;
LABEL_6:
        if ( v4 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 5LL);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 1LL);
        }
        return v3;
      }
    }
  }
  else
  {
    v7 = (char *)a1[35];
    v8 = (char *)a1[36];
    while ( v7 != v8 )
    {
      if ( *(_QWORD *)v7 == a2 )
      {
        memmove_0(v7, v7 + 16, v8 - (v7 + 16));
        a1[36] -= 16LL;
        v4 = CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
        goto LABEL_6;
      }
      v7 += 16;
    }
  }
  return v3;
}
