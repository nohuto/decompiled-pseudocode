/*
 * XREFs of ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800850B4
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18002F81C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180082F54 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180083D64 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C6DBC (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x1801D6A18 (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONAN.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801E17B8 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801EF2A0 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@E$0?0@gsl@@XZ @ 0x1801FA58C (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@E$0-0@gsl@@XZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18021588C (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CSharedSection::ResolveAllocation(CSharedSection *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  v3 = *((unsigned int *)this + 16);
  if ( a2 < v3 && a3 <= v3 - a2 && (v4 = *((_QWORD *)this + 9)) != 0 )
    return (void *)(a2 + v4);
  else
    return 0LL;
}
