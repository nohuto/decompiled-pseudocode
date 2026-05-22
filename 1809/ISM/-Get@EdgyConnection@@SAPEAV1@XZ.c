/*
 * XREFs of ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800C9D70
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18001CF90 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x180027348 (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1800CA674 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

struct EdgyConnection *EdgyConnection::Get(void)
{
  struct EdgyConnection *result; // rax
  struct EdgyConnection *v1; // rax
  struct EdgyConnection *v2; // rbx
  struct EdgyConnection *v3; // rcx

  result = (struct EdgyConnection *)EdgyConnection::s_spThis;
  if ( !EdgyConnection::s_spThis )
  {
    v1 = (struct EdgyConnection *)malloc(0x60uLL);
    v2 = v1;
    if ( v1 )
    {
      memset_0(v1, 0, 0x60uLL);
      *(_QWORD *)v2 = &RefCountedObject::`vftable';
      *(_QWORD *)v2 = &EdgyConnection::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *((_QWORD *)v2 + 2) = 0LL;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 4) = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 8) = 0LL;
      *((_QWORD *)v2 + 9) = 0LL;
      *((_QWORD *)v2 + 10) = 0LL;
      *((_QWORD *)v2 + 11) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    result = (struct EdgyConnection *)EdgyConnection::s_spThis;
    if ( (struct EdgyConnection *)EdgyConnection::s_spThis != v2 )
    {
      if ( v2 )
      {
        (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v2 + 8LL))(v2);
        result = (struct EdgyConnection *)EdgyConnection::s_spThis;
      }
      v3 = result;
      EdgyConnection::s_spThis = (__int64)v2;
      result = v2;
      if ( v3 )
      {
        (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v3 + 16LL))(v3);
        return (struct EdgyConnection *)EdgyConnection::s_spThis;
      }
    }
  }
  return result;
}
