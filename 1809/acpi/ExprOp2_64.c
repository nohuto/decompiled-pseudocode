/*
 * XREFs of ExprOp2_64 @ 0x1C0020A30
 * Callers:
 *     ExprOp2 @ 0x1C0020D80 (ExprOp2.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     MatchObjType @ 0x1C000A868 (MatchObjType.c)
 *     CopyObjBuffer @ 0x1C000AA64 (CopyObjBuffer.c)
 *     WriteField @ 0x1C00225A0 (WriteField.c)
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     DumpObject @ 0x1C0065214 (DumpObject.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int v9; // esi
  int v10; // ebp
  unsigned __int16 v11; // r10
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int16 v17; // ax
  struct _SLIST_ENTRY *v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int16 v22; // r10
  bool v23; // al
  __int64 v24; // r9
  size_t v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // eax
  int v30; // r11d
  __int64 v31; // rcx
  int ObjectTypeName; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  int v35; // edx
  int v36; // eax
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r9
  _QWORD *v42; // rcx
  _QWORD *v43; // rcx
  _DWORD *v44; // rdi
  int v45; // r15d
  _DWORD *v46; // rcx
  _DWORD *v47; // r12
  __int64 v48; // [rsp+68h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, a2[10], 0, "II");
  if ( (int)result >= 0 )
  {
    v8 = a2[10] + 80LL;
    v9 = 0;
    v10 = 0;
    v11 = *(_WORD *)(a2[10] + 82LL);
    if ( v11 == 128 )
    {
      v8 = *(_QWORD *)(a2[10] + 96LL) + 64LL;
    }
    else if ( v11 == 129 )
    {
      v8 = *(_QWORD *)(a2[10] + 96LL);
    }
    else if ( v11 > 0x10u || (v12 = 81921, !_bittest(&v12, v11)) )
    {
      v10 = -1072431094;
      LogError(3222536202LL, v5, v6, v7);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
      PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
      v8 = v48;
      goto LABEL_13;
    }
    if ( v11 != 128 )
      goto LABEL_7;
    if ( !MatchObjType(*(unsigned __int16 *)(v8 + 2), 135) )
    {
      v10 = -1072431094;
      LogError(3222536202LL, v5, v6, v7);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      GetObjectTypeName(135LL);
      v29 = GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
      PrintDebugMessage(207, v29, v30, 0, 0LL);
      goto LABEL_13;
    }
    if ( v22 != 128 )
    {
LABEL_7:
      v13 = *(_WORD *)(v8 + 2);
      if ( v13 == 133 )
        goto LABEL_10;
      if ( !v13 )
        goto LABEL_9;
      if ( v13 <= 4u )
        goto LABEL_10;
      if ( v13 != 5 && v13 != 14 )
      {
LABEL_9:
        if ( !v13 )
        {
LABEL_10:
          if ( (*(_BYTE *)v8 & 1) != 0 )
          {
            v31 = *(_QWORD *)(v8 + 8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v31 & 8) != 0 )
            {
              FreeData(v31, v5, v6, v7);
            }
          }
          else if ( *(_QWORD *)(v8 + 32) )
          {
            if ( *(int *)(v8 + 8) <= 0 )
            {
              if ( *(_WORD *)(v8 + 2) == 4 )
                FreeDataBuffs(*(_QWORD *)(v8 + 32) + 8LL, **(_DWORD **)(v8 + 32));
              FreeObjData(v8, v5, v6, v7);
            }
            else
            {
              *(_WORD *)v8 |= 8u;
            }
          }
          memset((void *)v8, 0, 0x28uLL);
        }
      }
    }
LABEL_13:
    if ( v10 < 0 )
      return (unsigned int)v10;
    *(_WORD *)(a2[11] + 2LL) = 1;
    v14 = *(_DWORD *)(a2[7] + 8LL);
    if ( v14 == 123 )
    {
      v15 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
LABEL_16:
      *(_QWORD *)(a2[11] + 16LL) = v15;
    }
    else
    {
      switch ( v14 )
      {
        case 114:
          v15 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_16;
        case 116:
          v5 = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 119:
          v15 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_16;
        case 121:
          v20 = a2[10];
          v21 = *(_QWORD *)(v20 + 56);
          if ( v21 >= 0x40 )
            v5 = 0LL;
          else
            v5 = *(_QWORD *)(v20 + 16) << v21;
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 122:
          v27 = a2[10];
          v28 = *(_QWORD *)(v27 + 56);
          if ( v28 >= 0x40 )
            v5 = 0LL;
          else
            v5 = *(_QWORD *)(v27 + 16) >> v28;
          *(_QWORD *)(a2[11] + 16LL) = v5;
          break;
        case 124:
          v15 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
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
          v33 = a2[10];
          v34 = *(_QWORD *)(v33 + 56);
          if ( v34 )
          {
            v5 = *(_QWORD *)(v33 + 16) % v34;
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
    v16 = a2[11];
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *(_WORD *)(v8 + 2);
        if ( v17 != 128 )
          break;
        v8 = *(_QWORD *)(v8 + 16) + 64LL;
      }
      if ( v17 != 129 )
        break;
      v8 = *(_QWORD *)(v8 + 16);
    }
    if ( v17 )
    {
      switch ( v17 )
      {
        case 1:
          v23 = IsCompatableDSDTRevision();
          v25 = 4LL;
          if ( v23 )
            v25 = 8LL;
          v9 = CopyObjBuffer((void *)(v8 + 16), v25, v16, v24);
          break;
        case 2:
          v35 = *(_DWORD *)(v8 + 24);
          if ( v35 )
            v9 = CopyObjBuffer(*(void **)(v8 + 32), (unsigned int)(v35 - 1), v16, v7);
          else
            v9 = -1073741811;
          break;
        case 3:
          v9 = CopyObjBuffer(*(void **)(v8 + 32), *(unsigned int *)(v8 + 24), v16, v7);
          break;
        case 5:
          v9 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v48);
          if ( !v9 )
          {
            v26 = v48;
            *(_QWORD *)(v48 + 32) = v8;
            *(_QWORD *)(v26 + 40) = v16;
          }
          break;
        case 14:
          v9 = WriteField(a1, v8, *(_QWORD *)(v8 + 32) + 12LL, v16);
          break;
        case 16:
          if ( (gDebugger & 0x20000) != 0 )
            DumpObject(v16, v5, 0LL);
          break;
        default:
          LogError(3222536201LL, v5, 0x1C0000000uLL, v7);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          v36 = GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
          PrintDebugMessage(215, v36, 0, 0, 0LL);
          v9 = -1072431095;
          break;
      }
      return v9;
    }
    v18 = (struct _SLIST_ENTRY *)gpheapGlobal;
    v19 = 0;
    if ( v8 == v16 )
      return v19;
    *(_OWORD *)v8 = *(_OWORD *)v16;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v16 + 16);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(v16 + 32);
    if ( !*(_QWORD *)(v16 + 32) )
      return v19;
    v37 = (void *)NewObjData(v18, v16, 0x1C0000000LL, v7);
    *(_QWORD *)(v8 + 32) = v37;
    if ( !v37 )
    {
      v19 = -1073741670;
      LogError(3221225626LL, v38, v39, v40);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v19;
    }
    memmove(v37, *(const void **)(v16 + 32), *(unsigned int *)(v16 + 24));
    switch ( *(_WORD *)(v8 + 2) )
    {
      case 4:
        v44 = *(_DWORD **)(v16 + 32);
        v45 = 0;
        v46 = *(_DWORD **)(v8 + 32);
        *v46 = *v44;
        if ( (int)*v44 > 0 )
        {
          v47 = v46 + 2;
          do
          {
            v19 = DupObjData(v18, (__int64)&v47[10 * v45], (__int64)&v44[10 * v45 + 2], v41);
            if ( v19 )
              break;
            ++v45;
          }
          while ( v45 < *v44 );
        }
        break;
      case 5:
        goto LABEL_96;
      case 0x82:
        v43 = *(_QWORD **)(v8 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v43 + 112LL));
          v43 = *(_QWORD **)(v8 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v43[1] + 112LL));
        break;
      case 0x83:
LABEL_96:
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v8 + 32) + 112LL));
        break;
      case 0x84:
        v42 = *(_QWORD **)(v8 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v42[1] + 112LL));
          v42 = *(_QWORD **)(v8 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*v42 + 112LL));
        break;
    }
    *(_WORD *)v8 &= ~1u;
    _InterlockedExchange((volatile __int32 *)(v8 + 8), 0);
    return v19;
  }
  return result;
}
