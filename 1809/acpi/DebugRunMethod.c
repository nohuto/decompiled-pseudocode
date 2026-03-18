/*
 * XREFs of DebugRunMethod @ 0x1C0063F20
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     GetBaseObject @ 0x1C00141B8 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C0030B29 (_strtoui64_0.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     DebugExpr @ 0x1C006393C (DebugExpr.c)
 *     IsNumber @ 0x1C00642DC (IsNumber.c)
 *     RunMethodCallBack @ 0x1C0064560 (RunMethodCallBack.c)
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
    dword_1C007F554 = -1;
    return v2;
  }
  if ( a2 )
  {
    if ( dword_1C007F554 != -1 )
    {
      if ( dword_1C007F554 >= 7 )
      {
        PrintDebugMessage(236, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        memset((char *)&unk_1C00812A0 + 40 * dword_1C007F554, 0, 0x28uLL);
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v5 = 5LL * dword_1C007F554;
          *((_QWORD *)&unk_1C00812A0 + v5 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C007F554;
          *((_WORD *)&unk_1C00812A0 + 4 * v5 + 1) = 1;
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
    qword_1C00813B8 = GetBaseObject(v13);
    DereferenceObjectEx(v4);
    dword_1C007F554 = 0;
  }
  else
  {
    if ( dword_1C007F554 < 0 )
    {
      PrintDebugMessage(226, 0LL, 0LL, 0LL, 0LL);
      v2 = -4;
    }
    else
    {
      memset(&unk_1C0081408, 0, 0x28uLL);
      fRunningMethod = 1;
      v6 = AsyncEvalObject(
             qword_1C00813B8,
             (_SLIST_ENTRY *)&unk_1C0081408,
             dword_1C007F554,
             (__int64)&unk_1C00812A0,
             (__int64)RunMethodCallBack,
             0LL,
             1);
      v7 = v6;
      if ( v6 == 32772 )
      {
        ObjectPath = GetObjectPath(qword_1C00813B8);
        v9 = &unk_1C006E28A;
        v10 = ObjectPath;
        if ( ObjectPath )
          v9 = ObjectPath;
        ConPrintf("\n%s returned PENDING\n", v9);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
      else
      {
        RunMethodCallBack(qword_1C00813B8 + 120, v6, &unk_1C0081408, 0LL);
        if ( v7 )
          v2 = -4;
      }
      DereferenceObjectEx(qword_1C00813B8);
      qword_1C00813B8 = 0LL;
      dword_1C007F554 = -1;
    }
    if ( v2 )
      goto LABEL_27;
  }
  return v2;
}
