/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015B8AC
 * Callers:
 *     _GetWindowIcon @ 0x1C015B834 (_GetWindowIcon.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C002ED14 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002FB20 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1, char a2)
{
  struct tagCURSOR *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 EmptyCursorObject; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t Size; // [rsp+28h] [rbp-79h]
  _QWORD v12[4]; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING v13; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v14[18]; // [rsp+68h] [rbp-39h] BYREF
  size_t v15; // [rsp+110h] [rbp+6Fh] BYREF

  LOBYTE(v15) = a2;
  v3 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)v12, 0LL, 0LL, (unsigned int *)&v15, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0, v4, v5);
    LOBYTE(v7) = 3;
    v3 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, v7, v8, v9);
    if ( v3 )
    {
      *(_QWORD *)&v13.Length = 0LL;
      v13.Buffer = 0LL;
      memset(v14, 0, 0x88uLL);
      if ( LODWORD(v12[0]) )
        LOWORD(v14[2]) = 3;
      else
        LOWORD(v14[2]) = 1;
      LODWORD(Size) = 0;
      LODWORD(v14[10]) = v15;
      HIDWORD(v14[10]) = *((_DWORD *)a1 + 35);
      LODWORD(v14[11]) = *((_DWORD *)a1 + 36);
      WORD2(v14[3]) = WORD2(v12[0]);
      HIWORD(v14[3]) = v12[1];
      v14[4] = v12[2];
      v14[5] = v12[3];
      if ( !_SetCursorIconData(v3, &v13, &v13, (struct tagCURSORDATA *)v14, Size) )
      {
        _DestroyCursor(v3, 0);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v12[2]);
      GreDeleteObject(v12[3]);
    }
  }
  return v3;
}
