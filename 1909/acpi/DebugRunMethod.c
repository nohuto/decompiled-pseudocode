/*
 * XREFs of DebugRunMethod @ 0x1C0065F60
 * Callers:
 *     <none>
 * Callees:
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     GetBaseObject @ 0x1C0010D44 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C00317A9 (_strtoui64_0.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     DebugExpr @ 0x1C0065984 (DebugExpr.c)
 *     IsNumber @ 0x1C0066314 (IsNumber.c)
 *     RunMethodCallBack @ 0x1C0066540 (RunMethodCallBack.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _QWORD *ObjectPath; // rax
  void *v9; // rdx
  void *v10; // rbx
  unsigned __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    PrintDebugMessage(235, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
    v2 = -4;
LABEL_27:
    dword_1C0081544 = -1;
    return v2;
  }
  if ( a2 )
  {
    if ( dword_1C0081544 != -1 )
    {
      if ( dword_1C0081544 >= 7 )
      {
        PrintDebugMessage(236, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        memset((char *)&unk_1C00832A0 + 40 * dword_1C0081544, 0, 0x28uLL);
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v5 = 5LL * dword_1C0081544;
          *((_QWORD *)&unk_1C00832A0 + v5 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C0081544;
          *((_WORD *)&unk_1C00832A0 + 4 * v5 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, a2, 0LL, 0LL, 0LL);
      }
      v2 = -2;
      goto LABEL_27;
    }
    v2 = DebugExpr(a2, v12, &v13);
    if ( v2 )
      goto LABEL_27;
    if ( !v13 )
    {
      PrintDebugMessage(232, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_3;
    }
    qword_1C00833B8 = GetBaseObject(v13);
    DereferenceObjectEx(v4);
    dword_1C0081544 = 0;
  }
  else
  {
    if ( dword_1C0081544 < 0 )
    {
      PrintDebugMessage(226, 0LL, 0LL, 0LL, 0LL);
      v2 = -4;
    }
    else
    {
      memset(&unk_1C0083408, 0, 0x28uLL);
      fRunningMethod = 1;
      v6 = AsyncEvalObject(
             qword_1C00833B8,
             (_SLIST_ENTRY *)&unk_1C0083408,
             dword_1C0081544,
             (__int64)&unk_1C00832A0,
             (__int64)RunMethodCallBack,
             0LL,
             1);
      v7 = v6;
      if ( v6 == 32772 )
      {
        ObjectPath = GetObjectPath(qword_1C00833B8);
        v9 = &unk_1C006FE7D;
        v10 = ObjectPath;
        if ( ObjectPath )
          v9 = ObjectPath;
        ConPrintf("\n%s returned PENDING\n", v9);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
      else
      {
        RunMethodCallBack(qword_1C00833B8 + 120, v6, &unk_1C0083408, 0LL);
        if ( v7 )
          v2 = -4;
      }
      DereferenceObjectEx(qword_1C00833B8);
      qword_1C00833B8 = 0LL;
      dword_1C0081544 = -1;
    }
    if ( v2 )
      goto LABEL_27;
  }
  return v2;
}
