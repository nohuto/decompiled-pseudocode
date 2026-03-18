/*
 * XREFs of PopPowerRequestActionInfo @ 0x14069FA64
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14069FB50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopClearSpecialRequest @ 0x1408A28AC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408A2B20 (PopSetSpecialRequest.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  char PreviousMode; // bp
  int IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  char v8; // [rsp+60h] [rbp+8h]
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  IsAppContainerOrIdentifyLevelContext = ObpReferenceObjectByHandleWithTag(
                                           *(_QWORD *)a1,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           0x72506F50u,
                                           &Object,
                                           0LL,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v4 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( PreviousMode )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          if ( !v8 )
            goto LABEL_6;
          IsAppContainerOrIdentifyLevelContext = -1073741790;
        }
LABEL_10:
        ObfDereferenceObjectWithTag(v4, 0x72506F50u);
        return (unsigned int)IsAppContainerOrIdentifyLevelContext;
      }
    }
    else if ( *(_DWORD *)(a1 + 8) == 4 && PreviousMode != 1 )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741637;
      goto LABEL_10;
    }
LABEL_6:
    v5 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v4[128] )
        v6 = PopSetSpecialRequest(v4, v5, *(_QWORD *)(a1 + 16));
      else
        v6 = PoSetPowerRequestInternal((__int64)v4, v5);
    }
    else if ( v4[128] )
    {
      v6 = PopClearSpecialRequest(v4, v5);
    }
    else
    {
      v6 = PoClearPowerRequestInternal((__int64)v4, v5);
    }
    IsAppContainerOrIdentifyLevelContext = v6;
    goto LABEL_10;
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
