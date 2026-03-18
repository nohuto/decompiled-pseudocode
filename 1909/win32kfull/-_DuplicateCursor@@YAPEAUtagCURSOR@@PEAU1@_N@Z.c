/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015C85C
 * Callers:
 *     _GetWindowIcon @ 0x1C015C7E4 (_GetWindowIcon.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002404C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C00242D4 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00250E0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1, char a2)
{
  struct tagCURSOR *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 EmptyCursorObject; // rax
  size_t Size; // [rsp+28h] [rbp-79h]
  _QWORD v9[4]; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING v10; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v11[18]; // [rsp+68h] [rbp-39h] BYREF
  size_t v12; // [rsp+110h] [rbp+6Fh] BYREF

  LOBYTE(v12) = a2;
  v3 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)v9, 0LL, 0LL, (unsigned int *)&v12, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0, v4, v5);
    v3 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, 3);
    if ( v3 )
    {
      *(_QWORD *)&v10.Length = 0LL;
      v10.Buffer = 0LL;
      memset(v11, 0, 0x88uLL);
      if ( LODWORD(v9[0]) )
        LOWORD(v11[2]) = 3;
      else
        LOWORD(v11[2]) = 1;
      LODWORD(Size) = 0;
      LODWORD(v11[10]) = v12;
      HIDWORD(v11[10]) = *((_DWORD *)a1 + 35);
      LODWORD(v11[11]) = *((_DWORD *)a1 + 36);
      WORD2(v11[3]) = WORD2(v9[0]);
      HIWORD(v11[3]) = v9[1];
      v11[4] = v9[2];
      v11[5] = v9[3];
      if ( !_SetCursorIconData(v3, &v10, &v10, (struct tagCURSORDATA *)v11, Size) )
      {
        _DestroyCursor(v3, 0);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v9[2]);
      GreDeleteObject(v9[3]);
    }
  }
  return v3;
}
