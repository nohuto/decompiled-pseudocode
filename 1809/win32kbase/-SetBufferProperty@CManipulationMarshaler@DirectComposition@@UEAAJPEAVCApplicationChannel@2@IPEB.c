/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016B230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C016ABDC (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C016B72C (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _WORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  char *v17; // r12

  v9 = 0;
  *a6 = 0;
  v10 = a3 - 7;
  if ( !v10 )
  {
    if ( a4 && Size == 128 )
    {
      v9 = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)this + 112, a4);
      if ( (v9 & 0x80000000) == 0 )
        *a6 = 1;
      return v9;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 6;
  if ( !v11 )
  {
    if ( (Size & 7) == 0 )
    {
      v16 = Size >> 3;
      if ( (unsigned int)(Size >> 3) <= 2 )
      {
        if ( (_DWORD)v16 )
        {
          if ( a4 )
          {
LABEL_22:
            v17 = (char *)this + 288;
            if ( (_DWORD)v16 != *((_DWORD *)this + 71)
              || RtlCompareMemory((char *)this + 288, a4, 8LL * (unsigned int)v16) )
            {
              memmove(v17, a4, 8LL * (unsigned int)v16);
              *((_DWORD *)this + 71) = v16;
              *a6 = 1;
              *((_DWORD *)this + 4) |= 0x100u;
            }
            return v9;
          }
        }
        else if ( !a4 )
        {
          goto LABEL_22;
        }
      }
    }
    return 3221225485LL;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    if ( Size - 3 <= 0x7C && *a4 )
    {
      memmove((char *)this + 136, a4, Size);
      *((_DWORD *)this + 33) = Size;
      *((_WORD *)this + (Size >> 1) + 68) = 0;
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x200u;
      return v9;
    }
    return (unsigned int)-1073741811;
  }
  if ( v12 != 1 )
    return (unsigned int)-1073741811;
  v9 = Size != 8 ? 0xC000000D : 0;
  if ( Size != 8 )
    return v9;
  v13 = *((_DWORD *)a4 + 1);
  v14 = (unsigned int)(v13 - 1);
  if ( v13 && v14 < *((_QWORD *)a2 + 10) )
  {
    _mm_lfence();
    v15 = *(_QWORD *)(v14 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
    return v9;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 120LL))(v15, 38LL) )
    return (unsigned int)-1073741811;
  return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(
                         this,
                         a2,
                         *(unsigned int *)a4,
                         v15,
                         a6);
}
