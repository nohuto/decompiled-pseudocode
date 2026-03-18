/*
 * XREFs of ParseDLMObjectInternal @ 0x1C00653C4
 * Callers:
 *     PerformDLMObjectBindings @ 0x1C00655FC (PerformDLMObjectBindings.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  char v7; // r14
  __int64 v8; // rbx
  unsigned int NameSpaceObject; // edi
  __int16 v10; // ax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  unsigned __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v23[17]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+160h] [rbp+60h] BYREF

  v4 = gpheapGlobal;
  memset(v23, 0, 232);
  v7 = 0;
  v22 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a3 + 32), a2, (__int64 *)&v24, 0);
  if ( NameSpaceObject )
    goto LABEL_18;
  v8 = *(_QWORD *)(v24 + 96);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 0, 0) )
  {
    if ( !a4 )
      goto LABEL_16;
    v10 = *(_WORD *)(a4 + 2);
    if ( v10 != 3 )
    {
      if ( v10 != 2
        || (unsigned int)GetNameSpaceObject(*(_BYTE **)(a4 + 32), a2, (__int64 *)&v22, 0)
        || (a4 = v22 + 64, *(_WORD *)(v22 + 66) != 3) )
      {
        NameSpaceObject = -1072431089;
        goto LABEL_19;
      }
    }
    if ( a4 )
    {
      v11 = *(_OWORD *)(v8 + 16);
      *(_OWORD *)((char *)&v23[2] + 8) = *(_OWORD *)v8;
      v12 = *(_OWORD *)(v8 + 32);
      *(_OWORD *)((char *)&v23[3] + 8) = v11;
      v13 = *(_OWORD *)(v8 + 48);
      *(_OWORD *)((char *)&v23[4] + 8) = v12;
      v14 = *(_OWORD *)(v8 + 64);
      *(_OWORD *)((char *)&v23[5] + 8) = v13;
      v15 = *(_OWORD *)(v8 + 80);
      *(_OWORD *)((char *)&v23[6] + 8) = v14;
      v16 = *(_OWORD *)(v8 + 96);
      *(_OWORD *)((char *)&v23[7] + 8) = v15;
      v17 = *(_OWORD *)(v8 + 128);
      *(_OWORD *)((char *)&v23[8] + 8) = v16;
      *(_OWORD *)((char *)&v23[9] + 8) = *(_OWORD *)(v8 + 112);
      v18 = *(_OWORD *)(v8 + 144);
      *(_OWORD *)((char *)&v23[10] + 8) = v17;
      v19 = *(_OWORD *)(v8 + 160);
      *(_OWORD *)((char *)&v23[11] + 8) = v18;
      v20 = *(_OWORD *)(v8 + 176);
      *(_OWORD *)((char *)&v23[12] + 8) = v19;
      *(_OWORD *)((char *)&v23[13] + 8) = v20;
      if ( !(unsigned int)DupObjData(v4, (__int64)v23, a4) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 72), *(signed __int64 *)&v23[2], 0LL) )
        {
          v7 = 1;
        }
        else
        {
          *(_OWORD *)(v8 + 40) = v23[0];
          *(_OWORD *)(v8 + 56) = v23[1];
          *(_QWORD *)(v8 + 72) = *(_QWORD *)&v23[2];
          _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 2, 0);
        }
      }
    }
    else
    {
LABEL_16:
      _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 1, 0);
    }
    NameSpaceObject = 0;
LABEL_18:
    if ( NameSpaceObject != -1072431089 )
    {
LABEL_21:
      if ( v7 )
        FreeDataBuffs((__int64)v23, 1u);
      goto LABEL_23;
    }
LABEL_19:
    if ( v8 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 1, 0);
      NameSpaceObject = 0;
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( v24 )
    DereferenceObjectEx(v24);
  if ( v22 )
    DereferenceObjectEx(v22);
  return NameSpaceObject;
}
