/*
 * XREFs of KiQueryProcessorNode @ 0x14017E69C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     KiFindFirstAvailableNode @ 0x14017E77C (KiFindFirstAvailableNode.c)
 *     KiIsNodeFull @ 0x14017E7DC (KiIsNodeFull.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlpGetLpcbByApicId @ 0x14027216C (HvlpGetLpcbByApicId.c)
 *     HvlpGetLpcbByLpIndex @ 0x14027219C (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned __int16 v6; // bp
  unsigned int ProcessorNode; // eax
  unsigned int FirstAvailableNode; // r10d
  __int64 v9; // rcx
  __int64 LpcbByLpIndex; // rax
  unsigned int v12; // r11d
  __int64 LpcbByApicId; // rax

  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
  {
    v6 = *a3;
    if ( KiNumaQueryProcessorNode )
    {
      ProcessorNode = KiNumaQueryProcessorNode(a1);
      FirstAvailableNode = ProcessorNode;
      if ( !ProcessorNode )
      {
        if ( *a3 != 0xFFFF )
        {
LABEL_7:
          v9 = (unsigned int)*a2;
          if ( (*(_BYTE *)(KeNodeBlock[*a3] + 173) & 2) == 0 )
            FirstAvailableNode = -1073741275;
          if ( (_DWORD)v9 == -1 )
          {
            *a2 = -1;
            v9 = 0xFFFFFFFFLL;
            if ( (HvlpFlags & 2) != 0 )
            {
              LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
              v9 = v12;
              if ( LpcbByLpIndex )
              {
                v9 = *(unsigned int *)(LpcbByLpIndex + 8);
                *a2 = v9;
              }
            }
          }
          if ( (HvlpFlags & 2) == 0 )
            return FirstAvailableNode;
          LpcbByApicId = HvlpGetLpcbByApicId(v9);
          if ( LpcbByApicId )
          {
            if ( *(_DWORD *)(LpcbByApicId + 48) )
              return FirstAvailableNode;
          }
          return (unsigned int)-1073741275;
        }
        FirstAvailableNode = KiFindFirstAvailableNode(a3);
LABEL_6:
        if ( FirstAvailableNode )
          return FirstAvailableNode;
        goto LABEL_7;
      }
      if ( ProcessorNode != -1073741275 )
        goto LABEL_6;
      if ( v6 == 0xFFFF || (unsigned __int8)KiIsNodeFull(KeNodeBlock[v6]) )
        return FirstAvailableNode;
      *a3 = v6;
    }
    else
    {
      if ( a1 >= KiMaximumGroupSize )
        return (unsigned int)-1073741275;
      *a3 = 0;
    }
    FirstAvailableNode = 0;
    goto LABEL_6;
  }
  _mm_lfence();
  *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 146LL);
  return 0LL;
}
