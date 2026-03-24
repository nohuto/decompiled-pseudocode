/*
 * XREFs of ExpIsRunningInWDAGContainer @ 0x1408CF270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     sub_1407045C8 @ 0x1407045C8 (sub_1407045C8.c)
 *     ExGetVMType @ 0x1408CEACC (ExGetVMType.c)
 */

__int64 __fastcall ExpIsRunningInWDAGContainer(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int VMType; // r10d
  int v11; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v12[2]; // [rsp+38h] [rbp-20h] BYREF
  _DWORD v13[6]; // [rsp+40h] [rbp-18h] BYREF

  VMType = ExGetVMType(&v11);
  if ( VMType >= 0 )
  {
    if ( v11 == 1 )
    {
      VMType = -1073741198;
      if ( qword_14096D410 )
      {
        v12[0] = 0x20000;
        v12[1] = 2;
        VMType = qword_14096D410(v12, 8LL, v13, 8LL);
        if ( VMType >= 0 && v13[0] == 0x20000 )
        {
          VMType = sub_1407045C8(a1, a2, a3, a4, v13[1]);
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
