/*
 * XREFs of ExprOp2_64 @ 0x1C0019E50
 * Callers:
 *     ExprOp2 @ 0x1C0019DE0 (ExprOp2.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     MatchObjType @ 0x1C001B668 (MatchObjType.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     NewObjData @ 0x1C001BAD0 (NewObjData.c)
 *     WriteField @ 0x1C001C620 (WriteField.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     PushFrame @ 0x1C0020A84 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     CopyObjBuffer @ 0x1C002CBF4 (CopyObjBuffer.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     DumpObject @ 0x1C0067204 (DumpObject.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v9; // ebp
  unsigned __int16 v10; // r10
  int v11; // ecx
  unsigned __int16 v12; // ax
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int16 v16; // ax
  __int64 v17; // r14
  unsigned int v18; // ebp
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int16 v21; // r10
  char v22; // al
  size_t v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // eax
  int v28; // r11d
  __int64 v29; // rcx
  int ObjectTypeName; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  int v33; // edx
  int v34; // eax
  void *v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  _DWORD *v38; // rdi
  int v39; // r15d
  _DWORD *v40; // rcx
  _DWORD *v41; // r12
  __int64 v42; // [rsp+68h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, a2[10], 0LL, "II");
  if ( (int)result >= 0 )
  {
    v7 = a2[10] + 80LL;
    v8 = 0;
    v9 = 0;
    v10 = *(_WORD *)(a2[10] + 82LL);
    if ( v10 == 128 )
    {
      v7 = *(_QWORD *)(a2[10] + 96LL) + 64LL;
    }
    else if ( v10 == 129 )
    {
      v7 = *(_QWORD *)(a2[10] + 96LL);
    }
    else if ( v10 > 0x10u || (v11 = 81921, !_bittest(&v11, v10)) )
    {
      v9 = -1072431094;
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v7 + 2));
      PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
      v7 = v42;
      goto LABEL_13;
    }
    if ( v10 != 128 )
      goto LABEL_7;
    if ( !(unsigned __int8)MatchObjType(*(unsigned __int16 *)(v7 + 2), 135LL) )
    {
      v9 = -1072431094;
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      GetObjectTypeName(135LL);
      v27 = GetObjectTypeName(*(unsigned __int16 *)(v7 + 2));
      PrintDebugMessage(207, v27, v28, 0, 0LL);
      goto LABEL_13;
    }
    if ( v21 != 128 )
    {
LABEL_7:
      v12 = *(_WORD *)(v7 + 2);
      if ( v12 == 133 )
        goto LABEL_10;
      if ( !v12 )
        goto LABEL_9;
      if ( v12 <= 4u )
        goto LABEL_10;
      if ( v12 != 5 && v12 != 14 )
      {
LABEL_9:
        if ( !v12 )
        {
LABEL_10:
          if ( (*(_BYTE *)v7 & 1) != 0 )
          {
            v29 = *(_QWORD *)(v7 + 8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v29 & 8) != 0 )
            {
              FreeData((_QWORD *)v29);
            }
          }
          else if ( *(_QWORD *)(v7 + 32) && *(int *)(v7 + 8) <= 0 )
          {
            if ( *(_WORD *)(v7 + 2) == 4 )
              FreeDataBuffs(*(_QWORD *)(v7 + 32) + 8LL, **(_DWORD **)(v7 + 32));
            FreeObjData(v7);
          }
          memset((void *)v7, 0, 0x28uLL);
        }
      }
    }
LABEL_13:
    if ( v9 < 0 )
      return (unsigned int)v9;
    *(_WORD *)(a2[11] + 2LL) = 1;
    v13 = *(_DWORD *)(a2[7] + 8LL);
    if ( v13 == 123 )
    {
      v14 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
LABEL_16:
      *(_QWORD *)(a2[11] + 16LL) = v14;
    }
    else
    {
      switch ( v13 )
      {
        case 114:
          v14 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_16;
        case 116:
          v5 = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 119:
          v14 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_16;
        case 121:
          v19 = a2[10];
          v20 = *(_QWORD *)(v19 + 56);
          if ( v20 >= 0x40 )
            v5 = 0LL;
          else
            v5 = *(_QWORD *)(v19 + 16) << v20;
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 122:
          v25 = a2[10];
          v26 = *(_QWORD *)(v25 + 56);
          if ( v26 >= 0x40 )
            v5 = 0LL;
          else
            v5 = *(_QWORD *)(v25 + 16) >> v26;
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 124:
          v14 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
          goto LABEL_16;
        case 125:
          v5 = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 126:
          v5 = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 127:
          v5 = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 133:
          v31 = a2[10];
          v32 = *(_QWORD *)(v31 + 56);
          if ( v32 )
          {
            v5 = *(_QWORD *)(v31 + 16) % v32;
            *(_QWORD *)(a2[11] + 16LL) = v5;
          }
          else
          {
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          }
          break;
        default:
          break;
      }
    }
    v15 = a2[11];
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = *(_WORD *)(v7 + 2);
        if ( v16 != 128 )
          break;
        v7 = *(_QWORD *)(v7 + 16) + 64LL;
      }
      if ( v16 != 129 )
        break;
      v7 = *(_QWORD *)(v7 + 16);
    }
    if ( v16 )
    {
      switch ( v16 )
      {
        case 1u:
          v22 = IsCompatableDSDTRevision((unsigned int)v16 - 1, v5, 0x1C0000000uLL, v6);
          v23 = 4LL;
          if ( v22 )
            v23 = 8LL;
          v8 = CopyObjBuffer((void *)(v7 + 16), v23);
          break;
        case 2u:
          v33 = *(_DWORD *)(v7 + 24);
          if ( v33 )
            v8 = CopyObjBuffer(*(void **)(v7 + 32), (unsigned int)(v33 - 1));
          else
            v8 = -1073741811;
          break;
        case 3u:
          v8 = CopyObjBuffer(*(void **)(v7 + 32), *(unsigned int *)(v7 + 24));
          break;
        case 5u:
          v8 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v42);
          if ( !v8 )
          {
            v24 = v42;
            *(_QWORD *)(v42 + 32) = v7;
            *(_QWORD *)(v24 + 40) = v15;
          }
          break;
        case 0xEu:
          v8 = WriteField(a1, v7, *(_QWORD *)(v7 + 32) + 12LL, v15);
          break;
        case 0x10u:
          if ( (gDebugger & 0x20000) != 0 )
            DumpObject(v15, v5, 0LL);
          break;
        default:
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          v34 = GetObjectTypeName(*(unsigned __int16 *)(v7 + 2));
          PrintDebugMessage(215, v34, 0, 0, 0LL);
          v8 = -1072431095;
          break;
      }
      return v8;
    }
    v17 = gpheapGlobal;
    v18 = 0;
    if ( v7 == v15 )
      return v18;
    *(_OWORD *)v7 = *(_OWORD *)v15;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(v15 + 16);
    *(_QWORD *)(v7 + 32) = *(_QWORD *)(v15 + 32);
    if ( !*(_QWORD *)(v15 + 32) )
      return v18;
    v35 = (void *)NewObjData(v17, v15);
    *(_QWORD *)(v7 + 32) = v35;
    if ( !v35 )
    {
      v18 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v18;
    }
    memmove(v35, *(const void **)(v15 + 32), *(unsigned int *)(v15 + 24));
    switch ( *(_WORD *)(v7 + 2) )
    {
      case 4:
        v38 = *(_DWORD **)(v15 + 32);
        v39 = 0;
        v40 = *(_DWORD **)(v7 + 32);
        *v40 = *v38;
        if ( (int)*v38 > 0 )
        {
          v41 = v40 + 2;
          do
          {
            v18 = DupObjData(v17, &v41[10 * v39], &v38[10 * v39 + 2]);
            if ( v18 )
              break;
            ++v39;
          }
          while ( v39 < *v38 );
        }
        break;
      case 5:
        goto LABEL_95;
      case 0x82:
        v37 = *(_QWORD **)(v7 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v37 + 112LL));
          v37 = *(_QWORD **)(v7 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v37[1] + 112LL));
        break;
      case 0x83:
LABEL_95:
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v7 + 32) + 112LL));
        break;
      case 0x84:
        v36 = *(_QWORD **)(v7 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v36[1] + 112LL));
          v36 = *(_QWORD **)(v7 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*v36 + 112LL));
        break;
    }
    *(_WORD *)v7 &= ~1u;
    _InterlockedExchange((volatile __int32 *)(v7 + 8), 0);
    return v18;
  }
  return result;
}
