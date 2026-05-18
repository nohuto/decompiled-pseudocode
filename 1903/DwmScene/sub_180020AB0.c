/*
 * XREFs of sub_180020AB0 @ 0x180020AB0
 * Callers:
 *     sub_18001EC7C @ 0x18001EC7C (sub_18001EC7C.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_180026ED0 @ 0x180026ED0 (sub_180026ED0.c)
 *     sub_1800270C4 @ 0x1800270C4 (sub_1800270C4.c)
 *     sub_1800272B8 @ 0x1800272B8 (sub_1800272B8.c)
 *     sub_1800273EC @ 0x1800273EC (sub_1800273EC.c)
 *     sub_180029C3C @ 0x180029C3C (sub_180029C3C.c)
 *     sub_18002A408 @ 0x18002A408 (sub_18002A408.c)
 *     sub_180032724 @ 0x180032724 (sub_180032724.c)
 *     sub_180032918 @ 0x180032918 (sub_180032918.c)
 *     sub_1800639B8 @ 0x1800639B8 (sub_1800639B8.c)
 *     sub_180063BAC @ 0x180063BAC (sub_180063BAC.c)
 *     sub_180066388 @ 0x180066388 (sub_180066388.c)
 *     sub_18006B614 @ 0x18006B614 (sub_18006B614.c)
 *     sub_18006B808 @ 0x18006B808 (sub_18006B808.c)
 *     sub_1800703F8 @ 0x1800703F8 (sub_1800703F8.c)
 *     sub_1800705EC @ 0x1800705EC (sub_1800705EC.c)
 *     sub_180070A00 @ 0x180070A00 (sub_180070A00.c)
 *     sub_180070E14 @ 0x180070E14 (sub_180070E14.c)
 *     sub_180070FFC @ 0x180070FFC (sub_180070FFC.c)
 *     sub_1800711E4 @ 0x1800711E4 (sub_1800711E4.c)
 *     sub_18007144C @ 0x18007144C (sub_18007144C.c)
 *     sub_180071640 @ 0x180071640 (sub_180071640.c)
 *     sub_180071834 @ 0x180071834 (sub_180071834.c)
 *     sub_180071970 @ 0x180071970 (sub_180071970.c)
 *     sub_180071BAC @ 0x180071BAC (sub_180071BAC.c)
 *     sub_180071CEC @ 0x180071CEC (sub_180071CEC.c)
 *     sub_180071E48 @ 0x180071E48 (sub_180071E48.c)
 *     sub_180071FB0 @ 0x180071FB0 (sub_180071FB0.c)
 *     sub_1800720F0 @ 0x1800720F0 (sub_1800720F0.c)
 *     sub_1800889CC @ 0x1800889CC (sub_1800889CC.c)
 *     sub_180088C0C @ 0x180088C0C (sub_180088C0C.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 *     sub_18008F538 @ 0x18008F538 (sub_18008F538.c)
 *     sub_1800A0E84 @ 0x1800A0E84 (sub_1800A0E84.c)
 *     sub_1800A1298 @ 0x1800A1298 (sub_1800A1298.c)
 *     sub_1800A148C @ 0x1800A148C (sub_1800A148C.c)
 *     sub_1800A16C8 @ 0x1800A16C8 (sub_1800A16C8.c)
 *     sub_1800A1904 @ 0x1800A1904 (sub_1800A1904.c)
 *     sub_1800A1A44 @ 0x1800A1A44 (sub_1800A1A44.c)
 *     sub_1800A1C74 @ 0x1800A1C74 (sub_1800A1C74.c)
 *     sub_1800A6DE8 @ 0x1800A6DE8 (sub_1800A6DE8.c)
 *     sub_1800A6FDC @ 0x1800A6FDC (sub_1800A6FDC.c)
 *     sub_1800A713C @ 0x1800A713C (sub_1800A713C.c)
 *     sub_1800AB138 @ 0x1800AB138 (sub_1800AB138.c)
 *     sub_1800AB368 @ 0x1800AB368 (sub_1800AB368.c)
 *     sub_1800B31BC @ 0x1800B31BC (sub_1800B31BC.c)
 *     sub_1800B33A4 @ 0x1800B33A4 (sub_1800B33A4.c)
 *     sub_1800BBF4C @ 0x1800BBF4C (sub_1800BBF4C.c)
 *     sub_1800BC360 @ 0x1800BC360 (sub_1800BC360.c)
 *     sub_1800D3874 @ 0x1800D3874 (sub_1800D3874.c)
 *     sub_1800D3C88 @ 0x1800D3C88 (sub_1800D3C88.c)
 *     sub_1800D4BD8 @ 0x1800D4BD8 (sub_1800D4BD8.c)
 *     sub_1800D7724 @ 0x1800D7724 (sub_1800D7724.c)
 *     sub_180120F2C @ 0x180120F2C (sub_180120F2C.c)
 *     sub_180121120 @ 0x180121120 (sub_180121120.c)
 *     sub_180121360 @ 0x180121360 (sub_180121360.c)
 *     sub_1801214BC @ 0x1801214BC (sub_1801214BC.c)
 *     sub_1801221A0 @ 0x1801221A0 (sub_1801221A0.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_180020AB0(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // r8
  __int64 *v5; // r9
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    *a1 = (__int64 *)v1[2];
    return a1;
  }
  v3 = (__int64 *)*v1;
  if ( !*(_BYTE *)(*v1 + 25) )
  {
    for ( i = (__int64 *)v3[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v3 = i;
LABEL_13:
    *a1 = v3;
    return a1;
  }
  v3 = (__int64 *)v1[1];
  if ( !*((_BYTE *)v3 + 25) )
  {
    v4 = v1;
    v5 = v1;
    do
    {
      v1 = v5;
      if ( v4 != (__int64 *)*v3 )
        break;
      v4 = v3;
      *a1 = v3;
      v3 = (__int64 *)v3[1];
      v5 = v4;
      v1 = v4;
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  if ( !*((_BYTE *)v1 + 25) )
    goto LABEL_13;
  return a1;
}
