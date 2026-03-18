/*
 * XREFs of ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C02093A4
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E2C (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AB50 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C02096A8 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C02096F8 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 */

__int64 __fastcall AddPublicObject(unsigned int a1, void *a2, int a3)
{
  struct tagPUBOBJ *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // ecx

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v6 = IsObjectPublic(a2);
    if ( v6 )
    {
      v11 = *((_DWORD *)v6 + 4);
      if ( v11 < 2147483646 )
      {
        *((_DWORD *)v6 + 4) = v11 + 1;
        return 1LL;
      }
      UserSetLastError(3221225621LL, v7, v8, v9);
    }
    else
    {
      v10 = Win32AllocPool(24LL, 878998357LL);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 16) = 1;
        *(_QWORD *)(v10 + 8) = a2;
        *(_DWORD *)(v10 + 20) = a3;
        *(_QWORD *)v10 = gpPublicObjectList;
        gpPublicObjectList = v10;
        GiveObject(a1, a2, 0);
        return 1LL;
      }
    }
  }
  return 0LL;
}
