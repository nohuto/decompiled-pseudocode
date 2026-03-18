/*
 * XREFs of ParseDLMObjectInternal @ 0x1C0063414
 * Callers:
 *     PerformDLMObjectBindings @ 0x1C00635B4 (PerformDLMObjectBindings.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 */

__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v4; // r12
  char v7; // r14
  __int64 v8; // rbx
  unsigned int NameSpaceObject; // edi
  __int64 v10; // r9
  __int16 v11; // ax
  unsigned __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v14[2]; // [rsp+28h] [rbp-D8h] BYREF
  signed __int64 v15; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v16; // [rsp+160h] [rbp+60h] BYREF

  v4 = (struct _SLIST_ENTRY *)gpheapGlobal;
  v13 = 0LL;
  v16 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a3 + 32), a2, (__int64 *)&v16, 0);
  if ( NameSpaceObject )
    goto LABEL_18;
  v8 = *(_QWORD *)(v16 + 96);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 0, 0) )
  {
    if ( !a4 )
      goto LABEL_16;
    v11 = *(_WORD *)(a4 + 2);
    if ( v11 != 3 )
    {
      if ( v11 != 2
        || (unsigned int)GetNameSpaceObject(*(_BYTE **)(a4 + 32), a2, (__int64 *)&v13, 0)
        || (a4 = v13 + 64, *(_WORD *)(v13 + 66) != 3) )
      {
        NameSpaceObject = -1072431089;
        goto LABEL_19;
      }
    }
    if ( a4 )
    {
      if ( !(unsigned int)DupObjData(v4, (__int64)v14, a4, v10) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 72), v15, 0LL) )
        {
          v7 = 1;
        }
        else
        {
          *(_OWORD *)(v8 + 40) = v14[0];
          *(_OWORD *)(v8 + 56) = v14[1];
          *(_QWORD *)(v8 + 72) = v15;
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
        FreeDataBuffs((__int64)v14, 1u);
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
  if ( v16 )
    DereferenceObjectEx(v16);
  if ( v13 )
    DereferenceObjectEx(v13);
  return NameSpaceObject;
}
