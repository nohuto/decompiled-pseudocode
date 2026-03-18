/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00271CC
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002404C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     GreOnCURSINFODestroy @ 0x1C00272D0 (GreOnCURSINFODestroy.c)
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C010B564 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 */

void __fastcall CleanupCursorObject(struct tagCURSOR *a1)
{
  __int64 v2; // rcx
  HSURF v3; // rcx
  HSURF v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(*((_QWORD *)a1 + 8));
    *((_DWORD *)a1 + 14) = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v2 = *((unsigned __int16 *)a1 + 36);
  if ( (_WORD)v2 )
  {
    UserDeleteAtom(v2);
    *((_WORD *)a1 + 36) = 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    DestroyAniIcon(a1);
  }
  else
  {
    GreOnCURSINFODestroy();
    v3 = (HSURF)*((_QWORD *)a1 + 11);
    if ( v3 )
    {
      GreDereferenceObject(v3);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 11) = 0LL;
    }
    v4 = (HSURF)*((_QWORD *)a1 + 12);
    if ( v4 )
    {
      GreDereferenceObject(v4);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v5 = *((_QWORD *)a1 + 16);
    if ( v5 )
    {
      GreDeleteObject(v5);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 16) = 0LL;
    }
    v6 = *((_QWORD *)a1 + 13);
    if ( v6 )
    {
      GreDeleteObject(v6);
      *((_QWORD *)a1 + 13) = 0LL;
    }
  }
}
