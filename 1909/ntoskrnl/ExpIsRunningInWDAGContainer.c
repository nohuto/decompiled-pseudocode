/*
 * XREFs of ExpIsRunningInWDAGContainer @ 0x14090C450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     sub_14072D380 @ 0x14072D380 (sub_14072D380.c)
 *     ExGetVMType @ 0x14090BB1C (ExGetVMType.c)
 */

__int64 __fastcall ExpIsRunningInWDAGContainer(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int VMType; // r10d
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  _DWORD v13[6]; // [rsp+40h] [rbp-18h] BYREF

  v12 = 0LL;
  VMType = ExGetVMType(&v11);
  if ( VMType >= 0 )
  {
    if ( v11 == 1 )
    {
      VMType = -1073741198;
      if ( qword_1409AD4A0 )
      {
        v13[0] = 0x20000;
        v13[1] = 2;
        VMType = qword_1409AD4A0(v13, 8LL, &v12, 8LL);
        if ( VMType >= 0 && (_DWORD)v12 == 0x20000 )
        {
          VMType = sub_14072D380(a1, a2, a3, a4, SHIDWORD(v12));
          *a5 = 1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  return (unsigned int)VMType;
}
