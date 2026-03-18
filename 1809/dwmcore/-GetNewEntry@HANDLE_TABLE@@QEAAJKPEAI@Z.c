/*
 * XREFs of ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009A96C
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800963DC (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180097038 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x180099FC4 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18009A3F4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x1800D8DE0 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x1800D8E44 (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::GetNewEntry(HANDLE_TABLE *this, int a2, unsigned int *a3)
{
  unsigned int v4; // edi
  unsigned int v7; // edx
  __int64 i; // rax
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx

  v4 = 0;
  if ( *((_DWORD *)this + 3) >= 0x400u || (v13 = HANDLE_TABLE::Resize(this, 0x400u), v4 = v13, v13 >= 0) )
  {
    *a3 = 0;
    v7 = *((_DWORD *)this + 4);
    for ( i = v7 * *((_DWORD *)this + 2); *(_DWORD *)(i + *((_QWORD *)this + 3)); i = *((_DWORD *)this + 2) * v7 )
    {
      v12 = v7 + 1;
      v7 = 1;
      if ( v12 != *((_DWORD *)this + 3) )
        v7 = v12;
      if ( v7 == *((_DWORD *)this + 4) )
      {
        v7 = 0;
        break;
      }
    }
    v9 = *((_DWORD *)this + 3);
    v10 = v7 + 1;
    if ( v7 + 1 == v9 )
      v10 = 1;
    *((_DWORD *)this + 4) = v10;
    if ( !v7 )
    {
      v15 = HANDLE_TABLE::ResizeToFit(this, v9);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x156u);
        return v4;
      }
      v7 = v9;
      *((_DWORD *)this + 4) = v9 + 1;
    }
    *(_DWORD *)(v7 * *((_DWORD *)this + 2) + *((_QWORD *)this + 3)) = a2;
    *a3 = v7;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x120u);
  }
  return v4;
}
