/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01D699C
 * Callers:
 *     _GetWindowIcon @ 0x1C02214D8 (_GetWindowIcon.c)
 * Callees:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C006BE74 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1, char a2)
{
  struct tagCURSOR *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 EmptyCursorObject; // rax
  __int64 v7; // rdx
  size_t Size; // [rsp+28h] [rbp-79h]
  struct _UNICODE_STRING v10; // [rsp+38h] [rbp-69h] BYREF
  int v11; // [rsp+48h] [rbp-59h] BYREF
  __int16 v12; // [rsp+4Ch] [rbp-55h]
  __int16 v13; // [rsp+50h] [rbp-51h]
  __int128 v14; // [rsp+58h] [rbp-49h]
  _OWORD v15[9]; // [rsp+68h] [rbp-39h] BYREF
  size_t v16; // [rsp+110h] [rbp+6Fh] BYREF

  LOBYTE(v16) = a2;
  v2 = 0LL;
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)&v11, 0LL, 0LL, (unsigned int *)&v16, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0, v4, v5);
    LOBYTE(v7) = 3;
    v2 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, v7);
    if ( v2 )
    {
      *(_QWORD *)&v10.Length = 0LL;
      v10.Buffer = 0LL;
      memset(v15, 0, 0x88uLL);
      v15[0] = 0LL;
      if ( v11 )
        LOWORD(v15[1]) = 3;
      else
        LOWORD(v15[1]) = 1;
      LODWORD(Size) = 0;
      LODWORD(v15[5]) = v16;
      *(_QWORD *)((char *)&v15[5] + 4) = *(_QWORD *)((char *)a1 + 140);
      WORD6(v15[1]) = v12;
      HIWORD(v15[1]) = v13;
      v15[2] = v14;
      if ( !_SetCursorIconData(v2, &v10, &v10, (struct tagCURSORDATA *)v15, Size) )
      {
        _DestroyCursor(v2, 0LL);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v14);
      GreDeleteObject(*((_QWORD *)&v14 + 1));
    }
  }
  return v2;
}
