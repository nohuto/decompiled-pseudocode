/*
 * XREFs of ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x1801D5308
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800943A8 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800A4FC8 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CInjectionAnimation::ProcessSetInjectionData(
        CInjectionAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA *a3)
{
  unsigned int v6; // edx
  CSharedSection *Resource; // rbp
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  const void *v11; // rbx
  void *v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 39) || (v6 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v15 = 62;
    goto LABEL_13;
  }
  Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, v6, 0xA7u);
  if ( !Resource )
  {
    v15 = 68;
LABEL_13:
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, v15, 0LL);
    return v10;
  }
  *((_DWORD *)this + 81) = *((_DWORD *)a3 + 4) / 0x84u;
  v8 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4Cu, 0LL);
  }
  else
  {
    v11 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( !v11 )
    {
      v15 = 86;
      goto LABEL_13;
    }
    v12 = operator new(saturated_mul(*((int *)this + 81), 0x84uLL));
    *((_QWORD *)this + 39) = v12;
    if ( v12 )
    {
      memcpy_0(v12, v11, *((unsigned int *)a3 + 4));
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 416LL) |= 2u;
      return 0;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x60u, 0LL);
    }
  }
  return v10;
}
